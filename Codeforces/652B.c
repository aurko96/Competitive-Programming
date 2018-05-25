#include<stdio.h>
int main()
{
    int a[1000],i,j,k,n,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
            for(j=0;j<n-1;j=j+2)
            {
                if(a[j]>a[j+2])
                {
                    temp=a[j];
                    a[j]=a[j+2];
                    a[j+2]=temp;
                }
            }
    }
    for(i=0;i<n-1;i++)
    {
            for(j=1;j<n-1;j=j+2)
            {
                if(a[j]>a[j+2])
                {
                    temp=a[j];
                    a[j]=a[j+2];
                    a[j+2]=temp;
                }
            }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
