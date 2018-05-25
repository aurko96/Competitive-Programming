#include<bits/stdc++.h>
#define LL long long
using namespace std;
int mx = 1000005;
bool stat[1000005];
vector<int>v;
int max_prime;
void sieve()
{
    int i,j,sq=sqrt(mx);
    for(i=4;i<=mx;i+=2)stat[i]=1;

    for(i=3;i<=sq;i+=2)
    {
        if(stat[i]==0)
        {
            for(j=i*i;j<=mx;j+=2*i)stat[j]=1;
        }
    }
    for(i=2;i<=mx;i++)
    {
        if(stat[i]==0)
        {
            v.push_back(i);
            max_prime=max(max_prime,i);
        }
    }
}
LL calc_prime_fact(LL a,LL b,LL l)
{
    LL ans=1;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>l) break;
        LL cnta,cntb,cntc;
        cnta=cntb=cntc=0;
        LL c;
        c=v[i];
        if(l%c==0)
        {
            while(1)
            {
                if(l%c==0)
                {
                    l/=c;
                    cntc++;
                }
                else break;
                if(a%c==0)
                {
                    a/=c;
                    cnta++;
                }
                if(b%c==0)
                {
                    b/=c;
                    cntb++;
                }
            }
            if(max(cnta,cntb)<cntc)
            {
                for(int j=0;j<cntc;j++)
                {
                    ans*=c;
                }
            }
        }
    }
    return ans;
}
int main()
{
    sieve();
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        LL a,b,c,l;
        cin>>a>>b>>l;
        c=calc_prime_fact(a,b,l);
        if(l%a!=0 || l%b!=0) cout<<"Case "<<i<<": impossible\n";
        else cout<<"Case "<<i<<": "<<c<<"\n";
    }
}
