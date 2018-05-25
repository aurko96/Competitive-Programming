#include<bits/stdc++.h>
#define INF 2e9
using namespace std;
int dp[500][200],n,m;
int ara[500][200];
int call(int pos,int index)
{
    if(pos>m) return 0;
    int x,y;
    if(pos>n) x=n-(pos%n);
    else if(pos<=n) x=pos;
    if(index>x || index<1) return 0;
    if(dp[pos][index]!=-1) return dp[pos][index];
    int ret=0;
    if((pos+1)>n)
    {
        ret=max(ret,call(pos+1,index));
        ret=max(ret,call(pos+1,index-1));
    }
    else if((pos+1)<=n)
    {
        ret=max(ret,call(pos+1,index));
        ret=max(ret,call(pos+1,index+1));
    }
    //cout<<"val =  "<<ret+ara[pos][index]<<endl;
    return dp[pos][index]=ret+ara[pos][index];
}
int main()
{
    int i,j,k,x,y,z,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        memset(dp,-1,sizeof(dp));
        memset(ara,0,sizeof(ara));
        cin>>n;
        m=(2*n)-1;
        for(j=1;j<=m;j++)
        {
            int p;
            if(j>n) p=n-(j%n);
            else p=j;
            //cout<<"p =   "<<p<<endl;
            for(k=1;k<=p;k++)
            {
                cin>>ara[j][k];
            }
        }
        x=call(1,1);
        cout<<"Case "<<i<<": "<<x<<"\n";
    }
}
