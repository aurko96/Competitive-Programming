#include<bits/stdc++.h>
#define LL long long
using namespace std;
int mx = 100000;
bool stat[100001];
vector<LL>prime;
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
            prime.push_back(i);
        }
    }
}
int main()
{
    sieve();
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    LL i,j,n,x,y=0,z;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        y=0;
        for(j=0;;j++)
        {
            if(prime[j]>x) break;
            else y++;
        }
        if(y%2==0) cout<<"Bob"<<"\n";
        else cout<<"Alice"<<"\n";
    }
}
