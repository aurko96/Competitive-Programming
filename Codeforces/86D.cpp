#include<bits/stdc++.h>
#define LL long long
using namespace std;
struct query
{
    int l,r,i;
} q[200005];
int block;       // MO's Algorithm
int ara[200005],mp[1000005];
LL ans,result[200005],cnt;
bool cmp(query x,query y)
{
    if(x.l/block!=y.l/block) return x.l/block<y.l/block;
    return x.r<y.r;
}
void add(int pos)
{
    cnt=mp[ara[pos]];
    ans-=(cnt*cnt*ara[pos]);
    cnt=++mp[ara[pos]];
    ans+=(cnt*cnt*ara[pos]);
}
void remove(int pos)
{
    cnt=mp[ara[pos]];
    ans-=(cnt*cnt*ara[pos]);
    cnt=--mp[ara[pos]];
    ans+=(cnt*cnt*ara[pos]);
}
int main()
{
    //ios_base::sync_with_stdio(0);
    //cin.tie(nuintptr);
    int i,j,n,m,x,y,z;
    scanf("%d %d",&n,&m);
    block=sqrt(n);
    for(i=0;i<n;i++) scanf("%d",&ara[i]);
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&x,&y);
        q[i].l=--x;
        q[i].r=--y;
        q[i].i=i;
    }
    sort(q,q+m,cmp);
    //for(i=0;i<m;i++) cout<<q[i].l<<" "<<q[i].r<<" "<<q[i].i<<endl;
    int currentL=0,currentR=0;
    for(i=0;i<m;i++)
    {
        int left=q[i].l,right=q[i].r;
        while(currentL<left)
        {
            remove(currentL);
            currentL++;
            //cout<<"1st loop "<<currentL<<endl;
        }
        //cout<<"index = "<<i<<" "<<1<<" "<<ans<<endl;
        while(currentL>left)
        {
            add(currentL-1);
            currentL--;
           // cout<<"2nd loop "<<currentL<<endl;
        }
        //cout<<"index = "<<i<<" "<<2<<" "<<ans<<endl;
        while(currentR<=right)
        {
            add(currentR);
            currentR++;
           // cout<<"3rd loop "<<currentR<<endl;
        }
        //cout<<"index = "<<i<<" "<<3<<" "<<ans<<endl;
        while(currentR>right+1)
        {
            remove(currentR-1);
            currentR--;
            //cout<<"4th loop "<<currentR<<endl;
        }
        //cout<<"index = "<<i<<" "<<4<<" "<<ans<<endl;
        result[q[i].i]=ans;
    }
    for(i=0;i<m;i++) printf("%I64d\n",result[i]);
}

