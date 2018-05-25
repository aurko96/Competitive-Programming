#include<bits/stdc++.h>
#define LL long long
using namespace std;
vector<LL> tree[4*30005];
LL ara[30005];
inline void build(LL at,LL left,LL right)
{
    if(left==right){ tree[at].push_back(ara[left]); return; }
    LL mid=(left+right)/2;
    build(2*at,left,mid);
    build(2*at+1,mid+1,right);
    tree[at].resize(tree[2*at].size()+tree[2*at+1].size());
    merge(tree[2*at].begin(),tree[2*at].end(),tree[2*at+1].begin(),tree[2*at+1].end(),tree[at].begin());
//    cout<<"Node = "<<at<<endl;
//    for(int i=0;i<tree[at].size();i++) cout<<tree[at][i]<<" ";
//    cout<<endl;
}

inline LL query(LL at,LL left,LL right,LL l,LL r,LL k)
{
    if(left>r || right<l) return 0;
    if(left>=l && right<=r)
    {
        LL res;
        res=tree[at].end()-lower_bound(tree[at].begin(),tree[at].end(),k+1);
        //cout<<"Hello  "<<res<<endl;
        return res;
    }
    LL mid=(left+right)/2;
    LL x,y;
    x=query(2*at,left,mid,l,r,k);
    y=query(2*at+1,mid+1,right,l,r,k);
    return x+y;
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>ara[i];
    build(1,1,n);
    int q;
    cin>>q;
    LL prev=0;
    for(int i=1;i<=q;i++)
    {
        LL l,r,k;
        cin>>l>>r>>k;
        l=l^prev;
        r=r^prev;
        k=k^prev;
        if(l<1) l=1;
        if(r>n) r=n;
        if(l>r) prev=0;
        else prev=query(1,1,n,l,r,k);
        cout<<prev<<"\n";
    }
}
