

#include<bits/stdc++.h>

using namespace std;

#define inf 0x3f3f3f3f
#define LL long long
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define LOJ cout<<"Case "<<++cs<<": "<<ans<<endl;
#define Max3(x,y,z) max(x,max(y,z))

//LL BigMod(LL B,LL P,LL M){LL R=1;while(P>0){if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;}return R;}
//LL InverseMod(LL B,LL M){return BigMod(B,M-2,M);}// if M is prime else Phi(M-1);
LL one[]= {2,3,4,5};
LL six[]= {2,3,4,5};
LL five[]= {1,3,4,6};
LL two[]= {1,3,4,6};
LL three[]= {1,2,5,6};
LL four[]= {1,2,5,6};
vector< LL >num[10];

LL dp[10][10005];
LL n,flag;

LL call(LL i,LL sum)
{
    if(sum==n){flag=1;return 0;}
    if(sum>n)return inf;
    if(dp[i][sum]!=-1)return dp[i][sum];
    LL ret=inf;
    for(LL j=0; j<4; j++)
    {
        ret=min(ret,1+call(num[i][j],sum+num[i][j]));
    }
    return dp[i][sum]=ret;
}
int main()
{
    FastRead
    LL test;


    for(LL i=0; i<4; i++)
    {

        num[1].push_back(one[i]);
        num[2].push_back(two[i]);
        num[3].push_back(three[i]);
        num[4].push_back(four[i]);
        num[5].push_back(five[i]);
        num[6].push_back(six[i]);
    }

    cin>>test;
    while(test--)
    {
        memset(dp,-1,sizeof(dp));
        flag=0;
        LL x,y,ans;
        cin>>n;
        ans=call(1,0);
        //if(ans>=inf)ans=-1;
        if(flag==0)cout<<"-1"<<endl;
        else cout<<ans<<endl;

    }
}

