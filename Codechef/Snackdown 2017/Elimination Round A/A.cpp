#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t,ara[500];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m;
        memset(ara,0,sizeof(ara));
        int x,y;
        for(int j=0;j<m;j++)
        {
            cin>>x>>y;
            ara[x]=1;
            ara[y]=1;
        }
        int cnt=0;
        for(int j=1;j<=n;j++)
        {
           if(ara[j]==0) cnt++;
        }
        if(cnt%2==0) cout<<"yes\n";
        else cout<<"no\n";
    }
}
