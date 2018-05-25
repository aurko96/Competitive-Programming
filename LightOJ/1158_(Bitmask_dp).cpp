#include<bits/stdc++.h>
#define LL long long
using namespace std;
string str;
int d,len;
LL dp[1<<10][1002],fact[13];

int Set(int N,int pos){return N = N | (1<<pos);}
int Reset(int N,int pos){return N = N & ~(1<<pos);}
bool Check(int N,int pos){return (bool)(N & (1<<pos));}

LL call(int mask,int val)
{
   // int num=__builtin_popcount(mask); // Gives the total number of 1 bits in the mask
    if(mask==(1<<len)-1)
    {
        if(val==0) return 1;
        else return 0;
    }
    if(dp[mask][val]!=-1) return dp[mask][val];
    LL ret=0;
    for(int i=0;i<len;i++)
    {
        if(Check(mask,i)==0)
        {
            int div=(val*10+(str[i]-'0'))%d;
            ret+=call(Set(mask,i),div);
        }
    }
    return dp[mask][val]=ret;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        memset(dp,-1,sizeof(dp));
        cin>>str>>d;
        len=str.size();
        LL ans;
        ans=call(0,0);
        LL cnt[10],divide=1;
        memset(cnt,0,sizeof(cnt));
        fact[0]=1;
        for(int j=1;j<12;j++) fact[j]=j*fact[j-1];
        for(int j=0;j<len;j++) cnt[str[j]-'0']++;
        for(int j=0;j<10;j++)
        {
            divide*=fact[cnt[j]];
            // dividing factorial of the count of same digits
            // to get proper permutation of the numbers
        }
        cout<<"Case "<<i<<": "<<ans/divide<<"\n";
    }
}
