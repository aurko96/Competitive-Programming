#include<bits/stdc++.h>
#define LL long long
using namespace std;
int mx = 1000005;
bool stat[1000005];
vector<int>v;
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
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    sieve();
    int n;
    cin>>n;
    int ara[100005];
    for(int i=0;i<n;i++) cin>>ara[i];
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int cnt=0;
        int l,r,x,y,z;
        cin>>l>>r>>x>>y;
        for(int j=0;;j++)
        {
            if(v[j]<x) continue;
            if(v[j]>y) break;
            if(v[j]>=x && v[j]<=y)
            {
                for(int k=l-1;k<r;k++)
                {
                    z=ara[k];
                    while(z%v[j]==0)
                    {
                        z/=v[j];
                        cnt++;
                    }
                }
            }
        }
        cout<<cnt<<"\n";
    }
}
