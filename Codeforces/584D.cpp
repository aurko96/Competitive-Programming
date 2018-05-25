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
bool is_prime(LL n)
{
   if(n<=100000) return !stat[n];
   for(int i=0;i<prime.size() && prime[i]*prime[i]<=n;i++)
   {
       if(n%prime[i]==0) return 0;
   }
   return 1;
}
int main()
{
    sieve();
    LL i,j,n,x,y,z;
    cin>>n;
    n-=3;                  // As n becomes even subtracting it by 3
    if(n==0) cout<<"1\n3";
    else if(n==2) cout<<"2\n3 2";
    else
    {
        cout<<"3\n";
        for(i=0;;i++)
        {
            x=n-prime[i];    // Goldbach Conjecture
            if(is_prime(x))
            {
                cout<<3<<" "<<prime[i]<<" "<<x<<endl;
                return 0;
            }
        }
    }
}
