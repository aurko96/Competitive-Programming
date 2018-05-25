#include<bits/stdc++.h>
#define LL long long
using namespace std;
int n,base,num[20],len;
string str;
LL dp[1<<16][20];

int Set(int N,int pos){return N = N | (1<<pos);}
int Reset(int N,int pos){return N = N & ~(1<<pos);}
bool Check(int N,int pos){return (bool)(N & (1<<pos));}

LL call(int mask,int val)
{
    if(mask==(1<<len)-1)
    {
        if(val==0) return 1;
        else return 0;
    }
    if(dp[mask][val]!=-1) return dp[mask][val];
    LL ret=0;
    for(int i=0;i<len;i++)
    {
        if(Check(mask,i)==0) // Checks a digit is taken to form a number or not
        {
            int div=((val*base)+num[i])%n;  // Divisibility of a number by n
            ret+=call(Set(mask,i),div);  // Gives different permutation of given numbers divisible by n
        }
    }
    return dp[mask][val]=ret;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        memset(dp,-1,sizeof(dp));
        cin>>base>>n>>str;
        len=str.size();
        for(int j=0;j<len;j++)
        {
            if(str[j]>='0' && str[j]<='9') num[j]=(str[j]-'0');
            else num[j]=(str[j]-'A')+10;
        }
        LL ans;
        ans=call(0,0);
        cout<<"Case "<<i<<": "<<ans<<"\n";
    }
}
