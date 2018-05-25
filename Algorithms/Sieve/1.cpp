#include<stdio.h>
#include<string.h>
#include<math.h>
int mx = 20000000;
bool stat[20000005];

void siv()
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
int x[120000],y[120000];
int main()
{
    siv();
    int i,count=0;


    for(i=3;i<mx;i+=2)
    {
        if(stat[i]==0 && stat[i+2]==0)
        {
            //printf("%d\n",count);
            count++;
            x[count]=i;
            y[count]=i+2;
        }

    }

    int n;
    while(scanf("%d",&n))
    {
        printf("%d %d\n",x[n],y[n]);
    }
}
