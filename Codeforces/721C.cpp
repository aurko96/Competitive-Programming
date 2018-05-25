#include<bits/stdc++.h>
using namespace std;
vector<int>v[1005];
vector<int>vec;
long long dis[1001],val[1000][1000];
bool vis[100000];
long long t;
void dfs(long long node,long long w,long long pre)
{
    if(vis[node]==1) return;
    else vis[node]=1;
    if(dis[node]<w)
    {
       return;
    }
    else
    {
        dis[node]=w;
        //cout<<dis[node]<<endl;
        if(dis[node]<=t)
        {
            //cout<<t<<'p'<<endl;
            vec.push_back(node);
        }
    }
    for(int i=0;i<v[node].size();i++)
    {
        int x=v[node][i];
        if(x==pre) continue;
        //cout<<x<<" "<<w+val[node][x]<<endl;
        dfs(x,w+val[node][x],node);
    }
    return;
}
int main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    long long a,b,c,d,e,i,j,n,m,s,x,y,z,w;
    cin>>n>>m>>t;
    for(i=0;i<m;i++)
    {
       for(j=0;j<=m;j++)
        {
            dis[j]=1000000005;
        }
        cin>>x>>y>>z;
        v[x].push_back(y);
        val[x][y]=z;
    }
        dfs(1,0,0);
        int count=0;
        //cout<<vec.size()<<"\n";
        for(j=0;j<vec.size();j++)
        {
            //cout<<vec[j]<<" ";
            count++;
            if(vec[j]>=vec[j+1])
            {
                break;
            }
        }
        cout<<count<<"\n";
        for(j=0;j<count;j++)
        {
            cout<<vec[j]<<" ";
//            count++;
//            if(vec[j]>=vec[j+1])
//            {
//                break;
//            }
        }
}

