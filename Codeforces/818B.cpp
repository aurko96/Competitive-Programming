#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[200],per[200],n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++) cin>>ara[i];
    memset(per,0,sizeof(per));
    for(int i=0;i<m-1;i++)
    {
        int x,y;
        if(ara[i+1]>ara[i])
        {
            x=ara[i+1]-ara[i];
            per[ara[i]]=x;
        }
        else
        {
            x=n-ara[i];
            y=x+ara[i+1];
            per[ara[i]]=y;
        }
    }
    bool flag=0;
    int cnt[200];
    memset(cnt,0,sizeof(cnt));
    for(int i=1;i<=n;i++)
    {
        if(per[i]==0) flag=1;
        cnt[per[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(cnt[i]>1 || cnt[i]==0) flag=1;
    }
    for(int i=1;i<=n;i++) cout<<per[i]<<" ";
        cout<<"\n";
    if(flag) cout<<-1<<"\n";
    else
    {
        for(int i=1;i<=n;i++) cout<<per[i]<<" ";
        cout<<"\n";
    }
}
