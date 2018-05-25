#include<stdio.h>
#include<string.h>
#include<math.h>
int mx = 1000000;
bool stat[1000005];

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
}

int main()
{
    sieve();
    int n;

    while(scanf("%d",&n)==1)
    {
        int x,i,flag=0;
        if(n==0)
        {
            return 0;
        }
        for(i=2;i<n;i++)
        {
            x = n - i;
            if(stat[x]==0 && stat[i]==0 && x%2!=0 && i%2!=0)
            {
                flag=1;
                printf("%d = %d + %d\n",n,i,x);
                break;
            }
        }
        if(flag==0)
        {
            printf("Goldbach's conjecture is wrong.\n");
        }
    }
}
