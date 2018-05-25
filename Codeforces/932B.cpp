#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int dp[1000001];
vector<int>vv[10];
int l,r,k;
int func(int n)
{
    int x;
    LL mul=1;
    while(n)
    {
        x=n%10;
        n/=10;
        if(x!=0) mul*=x;
    }
    return mul;
}
int recur(int n)
{
    if(n<10)
    {
        return n;
    }
    if(dp[n]!=-1) return dp[n];
    else recur(func(n));
}
int main()
{
    FastRead
    memset(dp,-1,sizeof(dp));
    int x;
    for(int i=1; i<=1000000; i++)
    {
        x=recur(i);
        dp[i]=x;
        vv[x].push_back(i);
        //cout<<i<<"   "<<x<<endl;
    }
//    for(int i=1;i<=9;i++)
//    {
//        for(int j=0;j<vv[i].size();j++) cout<<vv[i][j]<<" ";
//        cout<<endl;
//    }
    int n;
    cin>>n;
    vector<int>::iterator a,b;
    LL c,d,e;
    for(int i=0; i<n; i++)
    {
        cin>>l>>r>>k;
        a=lower_bound(vv[k].begin(),vv[k].end(),l);
        b=upper_bound(vv[k].begin(),vv[k].end(),r);
        c=a-vv[k].begin();
        d=b-vv[k].begin();
        e=d-c;
        cout<<e<<"\n";

    }


}
