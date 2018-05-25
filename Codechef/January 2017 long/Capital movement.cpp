#include<bits/stdc++.h>
#define LL long long
using namespace std;
set<int>mark;
set<int>edge[50005];
set<int>::iterator it;
vector<pair<LL,LL> >vect;
vector<LL>found;
int main()
{
    LL i,j,k,t,n,x,y,z,ara[50005],node,ans[50005];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        mark.clear();
        vect.clear();
        found.clear();
        memset(ans,0,sizeof(ans));
        memset(ara,0,sizeof(ara));
        for(j=0;j<=50001;j++) edge[j].clear();
        cin>>n;
        for(j=1;j<=n;j++)
        {
            cin>>ara[j];
            mark.insert(j);
            vect.push_back(make_pair(ara[j],j));
        }
        sort(vect.begin(),vect.end());
        reverse(vect.begin(),vect.end());
        for(j=0;j<n-1;j++)
        {
            cin>>x>>y;
            edge[x].insert(y);
            edge[y].insert(x);
        }
        for(j=0;j<vect.size();j++)
        {
            node=vect[j].second;
            if(mark.size()==0) break;
            found.clear();
            for(it=mark.begin();it!=mark.end();it++)
            {
                //cout<<node<<" "<<*it<<endl;
                if(node==(*it)) continue;
                if(edge[node].find(*it)==edge[node].end())
                {
                    //cout<<"not connected\n";
                    found.push_back(*it);
                    ans[*it]=node;
                }
            }
            for(k=0;k<found.size();k++)
            {
                mark.erase(found[k]);
            }
        }
        for(j=1;j<=n;j++)
        {
            cout<<ans[j]<<" ";
        }
        cout<<"\n";
    }
}
