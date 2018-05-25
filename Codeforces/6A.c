#include<stdio.h>
int main()
{
    int a[100],i,n,x,j;
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    if((a[0]+a[1])>a[2] || (a[1]+a[2])>a[3])
    {
        printf("TRIANGLE");
    }
    else if((a[0]+a[1])==a[2] || (a[1]+a[2])==a[3])
    {
        printf("SEGMENT");
    }
    else
    {
        printf("IMPOSSIBLE");
    }
}
