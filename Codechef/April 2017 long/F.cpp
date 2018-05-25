#include<bits/stdc++.h>
#define LL long long
using namespace std;
struct query
{
    int l,r,i,k;
}q[311111];
int block=320;   // ~sqrt(100000)
int ara[311111],ara2[100005],ans,result[311111],cnt[100005];
int mp[1111111];
bool cmp(query x,query y)
{
    if(x.l/block!=y.l/block) return x.l/block<y.l/block;
    return x.r<y.r;
}
inline void add(int pos)
{
    if(pos>0)
    {
        mp[ara[pos]]++;
        cnt[mp[ara[pos]]]++;
    }
}
inline void remove(int pos)
{
    if(pos>0)
    {
        cnt[mp[ara[pos]]]--;
        mp[ara[pos]]--;
    }
}
int main()
{
    int i,j,n,x,y,z,t,px,count=0;
    int m;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        memset(cnt,0,sizeof(cnt));
        memset(mp,0,sizeof(mp));
        ans=0;
        scanf("%d",&n);
        scanf("%d",&m);
        for(i=0;i<n;i++) scanf("%d",&ara2[i]);
        px=1;
        ara[0]=px;
        for(i=1;i<n;i++)
        {
            if(ara2[i]==ara2[i-1]) ara[i]=px;
            else
            {
                px++;
                ara[i]=px;
            }
        }
        //for(i=0;i<n;i++) cout<<ara[i]<<" ";
        //cout<<endl<<endl;
        for(i=0;i<m;i++)
        {
            scanf("%d %d %d",&x,&y,&z);
            q[i].l=--x;
            q[i].r=--y;
            q[i].i=i;
            q[i].k=z;
        }
        sort(q,q+m,cmp);
        //for(i=0;i<m;i++) cout<<q[i].l<<" "<<q[i].r<<" "<<q[i].i<<endl;
        int currentL=0,currentR=0;
        for(i=0;i<m;i++)
        {
            int sum=0;
            int left=q[i].l,right=q[i].r;
            int val=q[i].k;
            while(currentL<left)
            {
                remove(currentL);
                currentL++;
               // cout<<"1st loop "<<currentL<<endl;
            }
            //cout<<"index = "<<i<<" "<<1<<" "<<ans<<" "<<val<<endl;
            while(currentL>left)
            {
                add(currentL-1);
                currentL--;
                //cout<<"2nd loop "<<currentL<<endl;
            }
            //cout<<"index = "<<i<<" "<<2<<" "<<ans<<" "<<val<<endl;
            while(currentR<=right)
            {
                add(currentR);
                currentR++;
                //cout<<"3rd loop "<<currentR<<endl;
            }
           // cout<<"index = "<<i<<" "<<3<<" "<<ans<<" "<<val<<endl;
            while(currentR>right+1)
            {
                remove(currentR-1);
                currentR--;
               // cout<<"4th loop "<<currentR<<endl;
            }
           // cout<<"index = "<<i<<" "<<4<<" "<<ans<<" "<<val<<endl;
           // cout<<endl;
            result[q[i].i]=cnt[val];
        }
        for(i=0;i<m;i++) printf("%d\n",result[i]);
    }

}

