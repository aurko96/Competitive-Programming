#include<bits/stdc++.h>
using namespace std;
int mx = 10000005;
bool stat[10000005];
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
    int k=0;
    int n,t;
    int x,i,j,flag=0,count=0;
    scanf("%d",&t);
    for(j=4;j<=t;j++)
    {
        flag=0;
        for(i=0;;i++)
        {
            if(v[i]>=j)
            {
                break;
            }
            if(j%v[i]==0)
            {
                flag++;
            }

        }
        if(flag==2)
        {
            count++;
        }
    }
    printf("%d\n",count);
}

