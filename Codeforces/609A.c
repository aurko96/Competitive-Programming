#include<stdio.h>
int main()
{
    int a[1000],j,i,n,p,x=0;
    scanf("%d %d",&n,&p);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]<a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        x=x+a[i];
        if(x>=p)
        {
            printf("%d",i+1);
            return 0;
        }
    }
}
