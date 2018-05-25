#include<bits/stdc++.h>
#define LL long long
using namespace std;
struct point{
    LL name,val,pre;
    bool operator<(const point &a)const{
        return a.val<val;
    }
};       //lowest val=dis[] stays at last
        //which is the top element of priority queue

priority_queue<point>pq;
vector<LL>edge[100005];
map<LL,LL>cost[100005];
LL dis[100005];
const LL INF = 0x3f3f3f3f;
LL pr[100005];     //parent node

void djk(point node)
{
    LL now=node.name;
    for(LL i=0;i<edge[now].size();i++)
    {
        LL x=edge[now][i];
        if(dis[now]+cost[now][x]<dis[x])
        {
            pr[x]=node.name;
            dis[x]=dis[now]+cost[now][x];
            point get;
            get.name=x;
            get.val=dis[x];
            get.pre=node.name;
            pq.push(get);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    LL i,j,n,m,x,y,z;
    vector<LL>vect;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>x>>y>>z;
        edge[x].push_back(y);
        edge[y].push_back(x);
        cost[x][y]=cost[y][x]=z;
    }
    for(i=0;i<=n;i++) dis[i]=1e14;
    dis[1]=0;
    point get;
    get.name=1;
    get.val=0;
    get.pre=0;
    pq.push(get);
    while(!pq.empty())
    {
        point temp=pq.top();
        //cout<<"Inside priority queue: "<<temp.name<<" "<<temp.val<<" "<<temp.pre<<endl;
        if(temp.name==n) break;
        pq.pop();
        djk(temp);
    }
    //for(i=1;i<=n;i++) cout<<dis[i]<<" ";
    //cout<<endl;
    if(dis[n]==1e14)
    {
        cout<<-1;
        return 0;
    }
    while(1)
    {
        vect.push_back(n);
        n=pr[n];
        if(n==0) break;
    }
    for(i=vect.size()-1;i>=0;i--) cout<<vect[i]<<" ";
    // printing nodes falling in the shortest path from 1 to n
}


