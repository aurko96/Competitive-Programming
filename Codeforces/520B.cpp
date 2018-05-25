#include<bits/stdc++.h>
using namespace std;
vector<int>steps;
int x,y,found;
int dis[100005];
void dfs(int numb,int val)
{
    if(numb<1 || numb>10001) return;
    if(val<dis[numb])
    {
        //steps.push_back(numb);
        dis[numb]=val;
    }
    else
    {
        return;
    }
    //cout<<numb<<endl;
    //steps.push_back(numb);
    if(numb==y)
    {
        //found=1;
        //for(int i=0;i<steps.size();i++) cout<<steps[i]<<" ";
        //if(x>y) cout<<steps.size()<<"\n";
        //else cout<<steps.size()<<"\n";
        return;
    }
    //cout<<numb<<endl;
    dfs(2*numb,val+1);
    dfs(numb-1,val+1);
    //steps.pop_back();
}
int main()
{
    int i,j,n,m;
    cin>>x>>y;
    for(i=0;i<15000;i++) dis[i]=1000000;
    dfs(x,0);
    //cout<<steps.size()<<"\n";
    cout<<dis[y]<<"\n";
}
