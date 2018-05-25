#include<bits/stdc++.h>
using namespace std;
bool a[1000],b[1000];
int dp[500][500],n;
int call(int shuru,int shesh)
{
    int count1=0,count0=0;
    if(shuru>shesh || shesh<shuru) return 0;
    if(dp[shuru][shesh]!=-1) return dp[shuru][shesh];
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
        //cout<<a[i]<<" ";
    }
    //cout<<endl<<endl;
   // cout<<"shuru = "<<shuru<<endl;
   // cout<<"shesh = "<<shesh<<endl;
    for(int i=shuru;i<=shesh;i++)
    {
        if(a[i]==1) b[i]=0;
        else b[i]=1;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==1) count0++;
        if(b[i]==1) count1++;
        //cout<<b[i]<<" ";
    }
    //cout<<endl;
    call(shuru+1,shesh-1);
    call(shuru+1,shesh);
    call(shuru,shesh-1);
    //max(call(shuru+1,shesh-1),max(call(shuru+1,shesh),call(shuru,shesh-1)));
    //cout<<"count1 = "<<count1<<endl<<"count0 = "<<count0<<endl;
    return dp[shuru][shesh]=max(count0,count1);
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int i,j,x=0,y,z=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0) z++;
    }
    if(z==0)
    {
        cout<<n-1<<"\n";
        return 0;
    }
    y=call(0,n-1);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            x=max(x,dp[i][j]);
        }
    }
    cout<<x<<"\n";
}
