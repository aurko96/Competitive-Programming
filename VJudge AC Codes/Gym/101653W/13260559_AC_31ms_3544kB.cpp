#include<bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

struct point{
    LL name,val;
    bool operator<(const point &a)const{
        return a.val<val;
    }
};

priority_queue<point>pq;
vector<LL>edge[105];
double cost[65][65];
double dis[65][65];
const LL INF = 0x3f3f3f3f;

void djk(point node,int src)
{
    LL now=node.name;
    for(LL i=0;i<edge[now].size();i++)
    {
        LL x=edge[now][i];
        if(dis[src][now]+cost[now][x]<dis[src][x])
        {
            dis[src][x]=dis[src][now]+cost[now][x];
            point get;
            get.name=x;
            get.val=dis[src][x];
            pq.push(get);
        }
    }
}


int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        map<string,int>mp;
        string str[65];
        for(int j=0;j<100;j++) edge[j].clear();
        memset(cost,0,sizeof(cost));
        memset(dis,0,sizeof(dis));
        while(!pq.empty()) pq.pop();
        int p,w,q;
        cin>>p;
        int x[100],y[100],z[100];
        for(int j=0;j<p;j++)
        {
            cin>>str[j]>>x[j]>>y[j]>>z[j];
            mp[str[j]]=j;
        }
        for(int j=0;j<p;j++)
        {
            for(int k=j+1;k<p;k++)
            {
                double len;
                double a,b,c;
                a=x[k]-x[j];
                b=y[k]-y[j];
                c=z[k]-z[j];
                len=(a*a);
               // cout<<"len1 = "<<len<<endl;
                len+=(b*b);
                //cout<<"len2 = "<<len<<endl;
                len+=(c*c);
               // cout<<"len3 = "<<len<<endl;
                len=sqrt(len);

               // cout<<"len4 = "<<len<<endl;

                cost[j][k]=cost[k][j]=len;
                edge[j].push_back(k);
                edge[k].push_back(j);
            }
        }
        cin>>w;
        string str2,str3;
        for(int j=0;j<w;j++)
        {
            cin>>str2>>str3;
            cost[mp[str2]][mp[str3]]=0.0;
        }
        for(int j=0;j<=62;j++)
        {
            for(int k=0;k<=62;k++) dis[j][k]=dis[k][j]=1e18;
        }
        for(int j=0;j<p;j++)
        {
            dis[j][j]=0;
            point get;
            get.name=j;
            get.val=0;
            pq.push(get);
            while(!pq.empty())
            {
                point temp=pq.top();
                pq.pop();
                djk(temp,j);
            }

        }
        cin>>q;
        cout<<"Case "<<i<<":\n";
        for(int j=0;j<q;j++)
        {
            cin>>str2>>str3;
            LL value;
            value=dis[mp[str2]][mp[str3]];
            if((dis[mp[str2]][mp[str3]]+0.5) >= (value+1) ) value++;
            cout<<"The distance from "<<str[mp[str2]]<<" to "<<str[mp[str3]]<<" is "<<value<<" parsecs.\n";
        }


    }
}
