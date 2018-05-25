#include<bits/stdc++.h>
#define LL long long
using namespace std;
int mx = 10005;
bool stat[10005];
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
    LL i,j,n,x,y,z,count=0;
    cin>>n>>x;
    for(i=0;;i++)
    {
        if(v[i]>n) break;
        for(j=i+2;j>=2;j--)
        {
            if(v[j-1]+v[j-2]+1==v[i])
            {
                //cout<<v[i]<<endl;
                count++;
            }
        }
    }
    if(count>=x) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}
