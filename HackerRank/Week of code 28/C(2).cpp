#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL cnt,sum;
bool vis[100005];
pair<LL,LL>pr[100005];
int main()
{
    LL i,j,n,m,x,y,z,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        sum=cnt=0;
        memset(vis,0,sizeof(vis));
        for(j=0;j<100002;j++)
        {
            pr[j].first=0;
            pr[j].second=0;
        }
        cin>>n>>m;
        for(j=0;j<m;j++)
        {
            cin>>pr[j].first>>pr[j].second;
        }
        sort(pr,pr+m);
        /*for(j=0;j<m;j++)
        {
            cout<<"pair = "<<pr[j].first<<" "<<pr[j].second<<endl;
        }*/
        for(j=0;j<m;j++)
        {
            x=pr[j].first;
            y=pr[j].second;
            if(vis[x]==0 && vis[y]==0)
            {
                sum+=(cnt*(cnt-1))+2;
                cnt+=2;
            }
            else if(vis[x]==1 && vis[y]==1)
            {
                sum+=(cnt*(cnt-1));
            }
            else if(vis[x]==1 || vis[y]==1)
            {
                cnt++;
                sum+=(cnt*(cnt-1));
            }
            vis[x]=1;
            vis[y]=1;
            //cout<<"hello = "<<cnt<<" "<<sum<<endl;
        }
        cout<<sum<<"\n";
    }
}

