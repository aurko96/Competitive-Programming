#include<bits/stdc++.h>
using namespace std;
int dp[10000];
int main()
{
    int i,j,n,x,y,z;
    //int ara[]={1,5,10,25,50};
    int ara[100];
    memset(dp,0,sizeof(dp));
    cin>>n;
    for(int i=0;i<n;i++) cin>>ara[i];
    dp[0]=1;
    for(i=0;i<n;i++)
    {
        for(j=ara[i];j<=8000;j++)
        {
            dp[j]+=dp[j-ara[i]];
        }
    }
    //while(cin>>n) cout<<dp[n]<<"\n";
//    cin>>x;
//    cout<<dp[x]<<endl;
    for(int i=0;i<=500;i++) cout<<i<<" "<<dp[i]<<endl;
    cout<<"next  \n\n";
    main();
}
