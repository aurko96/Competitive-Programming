#include<bits/stdc++.h>
#define LL long long
using namespace std;
struct query
{
    int l,r,i;
}q[311111];
int block=555;   // ~sqrt(311111)
int ara[311111],ans,result[311111];
int mp[1111111];
bool cmp(query x,query y)
{
    if(x.l/block!=y.l/block) return x.l/block<y.l/block;
    return x.r<y.r;
}
void add(int pos)
{
    mp[ara[pos]]++;
    if(mp[ara[pos]]==1) ans++;
}
void remove(int pos)
{
    mp[ara[pos]]--;
    if(mp[ara[pos]]==0) ans--;
}
int main()
{
    int i,j,n,x,y,z;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&ara[i]);
    int m;
    scanf("%d",&m);
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
    for(i=0;i<m;i++) printf("%d\n",result[i]);
}
