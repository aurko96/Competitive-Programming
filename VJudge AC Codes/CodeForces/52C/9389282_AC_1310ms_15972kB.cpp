#include<bits/stdc++.h>
#define LL long long
using namespace std;
struct tree    // ~  lazy propagation segment tree
{
    LL sum,prop;
} lazy[800005];
LL ara[200005];
inline void build(LL at,LL left,LL right)
{
    if(left>right)return;
    if(left==right)
    {
        lazy[at].sum+=ara[left];
        lazy[at].prop+=ara[left];
        return;
    }
    LL mid=(left+right)/2;
    build(2*at,left,mid);
    build(2*at+1,mid+1,right);
    lazy[at].sum=min(lazy[2*at].sum+lazy[at].prop,lazy[2*at+1].sum+lazy[at].prop);
    //cout<<"build = "<<lazy[at].sum<<" "<<lazy[at].prop<<endl;
}

inline LL query(LL at,LL left,LL right,LL l,LL r,LL carry=0)
{
    if(left>r || right<l) return 1e9;
    if(left>=l && right<=r) return lazy[at].sum+carry;
    LL mid=(left+right)/2;
    LL x,y;
    //cout<<"query = "<<lazy[at].sum<<" "<<lazy[at].prop<<" "<<carry<<endl;
    x=query(2*at,left,mid,l,r,carry+lazy[at].prop);
    y=query(2*at+1,mid+1,right,l,r,carry+lazy[at].prop);
    return min(x,y);
}
inline void update(LL at, LL left, LL right, LL l, LL r, LL val)
{
    //cout<<"update 4 = "<<at<<" "<<lazy[at].sum<<" "<<lazy[at].prop<<" "<<val<<endl;
    if(l>right || r<left) return;
    if(left>=l && right<=r)
    {
        lazy[at].sum+=val;
        lazy[at].prop+=val;
        //cout<<"update 1 = "<<at<<" "<<lazy[at].sum<<" "<<lazy[at].prop<<" "<<val<<endl;
        return;
    }
    LL mid=(left+right)/2;
    //cout<<"update 2 = "<<at<<" "<<lazy[at].sum<<" "<<lazy[at].prop<<" "<<val<<endl;
    update(2*at,left,mid,l,r,val);
    update(2*at+1,mid+1,right,l,r,val);
    lazy[at].sum=min(lazy[2*at].sum+lazy[at].prop,lazy[2*at+1].sum+lazy[at].prop);
    //cout<<"update 3 = "<<at<<" "<<lazy[at].sum<<" "<<lazy[at].prop<<" "<<val<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>ara[i];
    build(1,0,n-1);
    int q;
    cin>>q;
    cin.ignore();
    for(int i=0;i<q;i++)
    {
        string str;
        getline(cin,str);
        istringstream iss(str);
        int ara2[5];
        int x;
        int j=0;
        while(!iss.eof())
        {
            iss>>x;
            ara2[j]=x;
            j++;
        }
//        for(int k=0;k<j;k++) cout<<ara2[k]<<" ";
//        cout<<endl;
        if(j==2)
        {
            LL ans=0;
            if(ara2[0]>ara2[1]) ans=min(query(1,0,n-1,ara2[0],n-1),query(1,0,n-1,0,ara2[1]));
            else ans=query(1,0,n-1,ara2[0],ara2[1]);
            cout<<ans<<"\n";
        }
        else if(j==3)
        {
            if(ara2[0]>ara2[1])
            {
                update(1,0,n-1,ara2[0],n-1,ara2[2]);
                update(1,0,n-1,0,ara2[1],ara2[2]);
            }
            else update(1,0,n-1,ara2[0],ara2[1],ara2[2]);
        }
    }
}
