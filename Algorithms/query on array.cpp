#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL tree[400005];
LL ara[100005];
inline void build(LL at,LL left,LL right)
{
    if(left>right)return;
    if(left==right){ tree[at]=ara[left]; return; }
    LL mid=(left+right)/2;
    build(2*at,left,mid);
    build(2*at+1,mid+1,right);
    tree[at]=tree[2*at]+tree[2*at+1];
}

inline LL query(LL at,LL left,LL right,LL l,LL r)
{
    if(left>r || right<l) return 0;
    if(left>=l && right<=r) return tree[at];
    LL mid=(left+right)/2;
    LL x,y;
    x=query(2*at,left,mid,l,r);
    y=query(2*at+1,mid+1,right,l,r);
    return x+y;
}
inline void update(LL at, LL left, LL right, LL index, LL newvalue)
{
    if(index>right || index<left) return;
    if(left>=index && right<=index)
    {
        tree[at]=newvalue;
        return;
    }
    LL mid=(left+right)/2;
    update(2*at,left,mid,index,newvalue);
    update(2*at+1,mid+1,right,index,newvalue);
    tree[at]=tree[2*at]+tree[2*at+1];
}
int main()
{
    LL i,j,n,x,y,z;
    cin>>n;
    for(i=0;i<n;i++) cin>>ara[i];
    LL m;
    build(1,0,n-1);
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>x;
        if(x==1)
        {
            cin>>y>>z;
            update(1,0,n-1,y-1,z);
        }
        else if(x==2)
        {
           cin>>y;
           LL low=0,high=n-1,mid,num,flag=0;
           while(low<=high)
           {
               mid=(low+high)/2;
               num=query(1,0,n-1,mid,n-1);
               if(num>y) low=mid+1;
               else if(num<y) high=mid-1;
               else if(num==y){ flag=1; break;}
           }
           if(flag) cout<<"YES\n";
           else cout<<"NO\n";
        }

    }

}
