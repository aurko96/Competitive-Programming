#include<stdio.h>
int main()
{
    int a[105][105],b[10002],i,j,k,p,q,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    j=0;
    for(i=0;i<n;i++)
    {
        for(k=0,p=i;p>=0,k<=i;j++,p--,k++)
        {
            b[j]=a[p][k];
            if(k==i)
            {
                break;
            }
        }
        j++;
    }
    for(i=1;i<n;i++)
    {
        for(k=i,p=n-1;p<=i,k<n;p--,j++,k++)
        {
            b[j]=a[p][k];
            if(k==n-1)
            {
                break;
            }
        }
        j++;
    }
    /*for(i=0;i<n*n-1;i++)
    {
        for(j=0;j<n*n-1;j++)
        {
            if(b[j]>b[j+1])
            {
                int temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }*/
    for(i=0;i<n*n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
