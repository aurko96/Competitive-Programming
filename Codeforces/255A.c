#include<stdio.h>
int main()
{
    int i,n,a[1000],sum1=0,sum2=0,sum3=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i=i+3)
    {
        sum1=sum1+a[i];
    }
    //printf("%d\n",sum1);
    for(i=1;i<n;i=i+3)
    {
        sum2=sum2+a[i];
    }
    //printf("%d\n",sum2);
    for(i=2;i<n;i=i+3)
    {
        sum3=sum3+a[i];
    }
    //printf("%d\n",sum3);
    if(sum1>=sum2 && sum1>=sum3)
    {
        printf("chest");
    }
    else if(sum2>=sum1 && sum2>=sum3)
    {
        printf("biceps");
    }
    else
    {
        printf("back");
    }
}
