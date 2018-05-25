#include<stdio.h>
long long ara3[100005],ara4[100005];
int main()
{
    long long i,j,n,x,y,z=0;
    scanf("%I64d %I64d %I64d",&n,&x,&y);
    long long ara[100005],ara2[100005],sum=0,sum2=0;
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&ara2[i]);
    }
    for(i=x-1;i<y;i++)
    {
        ara3[ara[i]]++;
        ara4[ara2[i]]++;
    }
    for(i=x-1;i<y;i++)
    {
        if(ara3[ara[i]]!=ara4[ara[i]]) z=1;
        else if(ara3[ara2[i]]!=ara4[ara2[i]]) z=1;
        //printf("%d %d\n",ara3[ara[i]],ara4[ara[i]]);
    }
    if(z==1) printf("LIE\n");
    else printf("TRUTH\n");
}

