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
int main()
{
    sieve();
    LL i,j,n,x,y,z;
    cin>>n;
    for(i=1;i<=1000;i++)
    {
        x=(n*i)+1;
        if(stat[x]==1)
        {
            y=i;
            break;
        }
    }
   // cout<<stat[n]<<endl;
    cout<<i<<"\n";
}
