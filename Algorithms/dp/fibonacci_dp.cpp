#include<bits/stdc++.h>
#include<time.h>
using namespace std;
unsigned long long dp[1000000];
long long fib(long long n)
{
    if(n==1) return dp[n]=1;
    else if(n==2) return dp[n]=1;
    else if(dp[n]!=0) return dp[n];
    else dp[n]=fib(n-1)+fib(n-2);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    long long i,n,x;
    cin>>n;
    memset(dp,0,sizeof(dp));
    clock_t start,stop;
    start=clock();
    fib(n);
    stop=clock();
    double time;
    time=((double)stop-start)/CLOCKS_PER_SEC;
    cout.precision(15);
    cout<<fixed<<time<<endl;
    for(i=0;i<n;i++)
    {
        cout<<dp[i]<<" ";
    }
}
