#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL tree[400005];
LL ara[100005];
inline void build(LL at,LL left,LL right)
{
    if(left==right){ tree[at]=ara[left]; return; }
    LL mid=(left+right)/2;
    build(2*at,left,mid);
    build(2*at+1,mid+1,right);
    tree[at]=min(tree[2*at],tree[2*at+1]);
}

inline LL query(LL at,LL left,LL right,LL l,LL r)
{
    if(left>r || right<l) return 1e9;
    if(left>=l && right<=r) return tree[at];
    LL mid=(left+right)/2;
    LL x,y;
    x=query(2*at,left,mid,l,r);
    y=query(2*at+1,mid+1,right,l,r);
    return min(x,y);
}
int main()
{
    LL i,j,n,x,y,z,t;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld",&n,&x);
        for(j=0;j<n;j++) scanf("%lld",&ara[j]);
        build(1,0,n-1);
        printf("Case %lld:\n",i);
        while(x--)
        {
            scanf("%lld %lld",&y,&z);
            LL p=query(1,0,n-1,y-1,z-1);
            printf("%lld\n",p);
        }
    }
}
