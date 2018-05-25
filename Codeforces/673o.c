#include<stdio.h>
int main()
{
    int a[200],i,j,n,x,y,z;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[0]>15)
    {
        printf("15");
        return 0;
    }
    if(n==1)
    {
        if(a[0]<=15)
        {
            printf("%d",a[0]+15);
            return 0;
        }
    }
    for(i=0;i<n-1;i++)
    {
        if((a[i+1]-a[i])>15)
        {
            printf("%d",a[i]+15);
            return 0;
        }
        else
        {
            x=a[i+1];
        }
    }
    if((90-x)<15)
    {
        printf("90");
    }
    else
    {
        printf("%d",x+15);
    }
}
