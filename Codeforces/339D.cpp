#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL ara[150000],tree[4*150000],state;
void build(LL at,LL left,LL right,LL cnt)
{
    if(left==right)
    {
        tree[at]=ara[left];
        state=cnt;
        return;
    }
    LL mid=(left+right)/2;
    build(2*at,left,mid,cnt+1);
    build(2*at+1,mid+1,right,cnt+1);
    if(cnt%2!=state%2) tree[at]=tree[2*at] | tree[2*at+1];
    else tree[at]=tree[2*at] ^ tree[2*at+1];
}
LL query(LL at,LL left,LL right,LL pos,LL cnt)
{
    if(pos>=left && pos<=right)
    {
        if(left==right)
        {
            tree[at]=ara[pos];
            state=cnt;
            return tree[at];
        }
        LL mid=(left+right)/2;
        LL x,y;
        x=query(2*at,left,mid,pos,cnt+1);
        y=query(2*at+1,mid+1,right,pos,cnt+1);
        if(cnt%2!=state%2) tree[at]=x | y;
        else tree[at]=x ^ y;
        return tree[at];
    }
    else return tree[at];
}
int main()
{
    LL n,q;
    cin>>n>>q;
    n=1<<n;
    for(int i=0;i<n;i++) cin>>ara[i];
    build(1,0,n-1,0);
    for(int i=0;i<q;i++)
    {
        LL x,y,ans;
        cin>>x>>y;
        ara[x-1]=y;
        ans=query(1,0,n-1,x-1,0);
        cout<<ans<<"\n";
    }
}
