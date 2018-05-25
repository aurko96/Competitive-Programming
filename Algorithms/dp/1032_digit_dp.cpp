#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
string str;
LL dp[35][2][2];    // ~ Digit DP

string convert(int n) // converts a number into its binary digits as strings
{
    string ss;
    while(n>0)
    {
        ss+=(n%2)+'0';
        n/=2;
    }
    reverse(ss.begin(),ss.end());
    return ss;
}

LL calc_numbers(int pos,int tight)
{
    // calculates the numbers possible within the given range
    // from the current position of the valid adjacent bit
    // suppose the numbers range is 11011 in binary and our dp's state is
    // in position=2 which is 11--- so from this index 4 numbers are possible with this current adjacent bit
    // which are 11000,11001,11010,11011 so with this constraints this function returns val=4

    LL val=0;
    for(int i=pos;i<str.size();i++)
    {
        if(tight==1) val=2*val+(str[i]-'0');
        else val=2*val+1;
    }
    return val+1;
}

LL call(int pos,int tight,int pre)
{
    if(pos==str.size()) return 0;
    if(dp[pos][tight][pre]!=-1) return dp[pos][tight][pre];
    LL lim,ret=0;
    if(tight==1) lim=str[pos]-'0';
    else lim=1;
    for(int i=0;i<=lim;i++)
    {
        LL add=0;
        int newtight=tight;
        if(i!=lim) newtight=0;
        if(pre==1 and i==1) // found an adjacent bit
        {
            add=calc_numbers(pos+1,newtight);
        }
        ret+=add+call(pos+1,newtight,i);
    }
    return dp[pos][tight][pre]=ret;
}

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        memset(dp,-1,sizeof(dp));
        int n;
        cin>>n;
        str=convert(n);
        LL ans;
        ans=call(0,1,0);
        cout<<"Case "<<i<<": "<<ans<<"\n";
    }
}
