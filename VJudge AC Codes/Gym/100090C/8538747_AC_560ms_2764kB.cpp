#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,x,y,z;
    int ara[305][305],ara2[305][305];
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>ara[i][j];
            ara2[i][j]=ara[i][j];
        }
    }
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                ara[i][j]=min(ara[i][j],ara[i][k]+ara[k][j]);
            }
        }
    }
    int flag=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(ara[i][j]!=ara2[i][j]) flag=1;
        }
    }
    if(!flag)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<ara[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    else cout<<-1<<"\n";
}
