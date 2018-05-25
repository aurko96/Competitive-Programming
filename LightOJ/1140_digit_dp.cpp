#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
string str,str2;
LL dp[12][12][2][2];
string convert(int n)
{
    string ss;
    while(n>0)
    {
        ss+=(n%10)+'0';
        n/=10;
    }
    reverse(ss.begin(),ss.end());
    return ss;
}

LL call(int pos,int val,int tight,int pre,string &ss)
{
    cout<<"pos  "<<pos<<" "<<" "<<ss<<" "<<ss.size()<<endl;
    if(pos==ss.size()) return val;
    if(dp[pos][val][tight][pre]!=-1) return dp[pos][val][tight][pre];
    int lim;
    if(tight==1) lim=ss[pos]-'0';
    else lim=9;
    cout<<"lim = "<<lim<<endl;
    LL ret=0;
    for(int i=0;i<=lim;i++)
    {
        LL add=0;
        int newtight=0;
        if((ss[pos]-'0')==i) newtight=tight;
        if(pre>0)
        {
            if(i==0) ret+=call(pos+1,val+1,newtight,(i!=0) || pre,ss);
            else ret+=call(pos+1,val,newtight,(i!=0) || pre,ss);
        }
        else ret+=call(pos+1,0,newtight,(i!=0) || pre,ss);
    }
    return dp[pos][val][tight][pre]=ret;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        str.clear();
        str2.clear();
        memset(dp,-1,sizeof(dp));
        int n,m;
        cin>>n>>m;
        str=convert(n-1);
        str2=convert(m);
       cout<<"ss "<<str<<" "<<str2<<endl;
        LL ans1,ans2;
        ans1=call(0,0,1,0,str);
        memset(dp,-1,sizeof(dp));
        ans2=call(0,0,1,0,str2);
        cout<<"Case "<<i<<": "<<ans2-ans1<<"\n";
    }
}


