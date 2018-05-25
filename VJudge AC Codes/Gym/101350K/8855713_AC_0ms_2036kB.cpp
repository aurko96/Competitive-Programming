#include<bits/stdc++.h>

using namespace std;

#define inf 0x3f3f3f3f
#define LL long long
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define LOJ cout<<"Case "<<++cs<<": "<<ans<<endl;

//LL BigMod(LL B,LL P,LL M){LL R=1;while(P>0){if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;}return R;}
//LL InverseMod(LL B,LL M){return BigMod(B,M-2,M);}// if M is prime else Phi(M-1);void call(LL n)
map<int,int>mp;
void call(LL n)
{

    int ara[10],i,mx=0,s;
    memset(ara,0,sizeof(ara));
    while(n)
    {
        s=n%10;
        ara[s]++;
        n=n/10;
        mx=max(mx,ara[s]);
    }
    for(i=0;i<=9;i++)if(ara[i]==mx)mp[i]++;
}
int main()
{
    FastRead
    int test;
    cin>>test;
    while(test--)
    {
        mp.clear();
        LL a,b,n,ans=-1,i,sum,mx=0;
        cin>>a>>b>>n;
        for(i=1;; i++)
        {
            sum=a*i*i+b*i;
            if(sum<=n)call(sum);
            else break;
        }
        for(i=0;i<=9;i++)
        {
            if(mp[i]!=0 && mp[i]>mx){mx=mp[i];ans=i;}
        }
        cout<<ans<<endl;
    }
}
