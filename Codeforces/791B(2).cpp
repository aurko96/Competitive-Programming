#include<bits/stdc++.h>
#define LL long long
using namespace std;
set<LL>st[150001];
set<LL>::iterator it;
int main()
{
    LL i,j,n,m,x,y,z;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        st[x].insert(y);
        st[y].insert(x);
    }
    for(i=1;i<=n;i++)
    {
        for(it=st[i].begin();it!=st[i].end();it++)
        {
            z=*it;
            if(st[z].find(i)!=st[z].end())
            {
                st[z].erase(i);
            }
            else
            {
                flag=1;
                break;
            }
        }
    }
}
