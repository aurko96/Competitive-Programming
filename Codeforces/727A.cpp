#include<bits/stdc++.h>
using namespace std;
vector<long long>series;
bool found;
long long x,y;
void dfs(long long node)
{
    if(found) return;
    if(node>y) return;
    series.push_back(node);
    if(node==y)
    {
        found=1;
        cout<<"YES"<<"\n";
        cout<<series.size()<<"\n";
        for(int i=0;i<series.size();i++) cout<<series[i]<<" ";
    }
    dfs(2*node);
    dfs(10*node+1);
    series.pop_back();
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cin>>x>>y;
    dfs(x);
    if(found==0) cout<<"NO"<<"\n";
}
