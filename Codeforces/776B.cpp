#include<bits/stdc++.h>
using namespace std;
int mx = 100005;
bool stat[100005];
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
    int i,j,n,x,y,z;
    cin>>n;
    if(n==1 || n==2) cout<<1<<"\n";
    else cout<<2<<"\n";
    for(i=2;i<=n+1;i++)
    {
        //cout<<stat[i]<<endl;
       if(stat[i]==0)
       {
           cout<<1<<" ";
       }
       else if(stat[i]==1)
       {
           cout<<2<<" ";
       }
    }
}
