#include<bits/stdc++.h>
using namespace std;
int top[105];
int main()
{
    int i,j,n,m,x,y,z;
    while(cin>>n>>m)
    {
        if(n==0 && m==0) break;
        pair<int,int>p[105];
        memset(top,0,sizeof(top));
        for(i=0;i<m;i++)
        {
            cin>>x>>y;
            top[--y]++;
        }
        for(i=0;i<n;i++)
        {
            p[i].first=top[i];
            p[i].second=i;
        }
        for(i=0;i<n;i++) sort(p,p+n);
        for(i=0;i<n;i++)
        {
            if(i==n-1) cout<<++p[i].second<<"\n";
            else cout<<++p[i].second<<" ";
        }

    }

}

