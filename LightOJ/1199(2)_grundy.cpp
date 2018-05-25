#include<bits/stdc++.h>
using namespace std;
int gr[10005];
bool vis[10005];
inline void grundy()
{
    gr[0]=gr[1]=gr[2]=0;
    for(int i=3;i<=10000;i++)
    {
        memset(vis,0,sizeof(vis));
        int x=1,y=i-1;
        while(x<y)
        {
            vis[gr[x]^gr[y]]=1;
            x++;
            y--;
        }
        int z=0;
        while(vis[z]!=0) z++;
        gr[i]=z;
    }
}
int main()
{
    grundy();
    int i,j,n,x,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        int nim=0;
        for(j=0;j<n;j++)
        {
            cin>>x;
            nim^=gr[x];
        }
        if(nim) cout<<"Case "<<i<<": Alice\n";
        else cout<<"Case "<<i<<": Bob\n";
    }
}
