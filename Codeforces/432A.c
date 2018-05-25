#include<stdio.h>
int main()
{
    int n,k,i,a[2500],x,count=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=5-k)
        {
            count++;
        }
    }
    x=count/3;
    printf("%d",x);
}
