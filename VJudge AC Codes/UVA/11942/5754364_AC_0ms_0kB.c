#include<stdio.h>
int main()
{
    int a[1000],i,j,k,l,n,count=0;
    scanf("%d",&n);
    printf("Lumberjacks:\n");
    for(i=1;i<=n;i++)
    {
        count=0;
        for(j=0;j<10;j++)
        {
            scanf("%d",&a[j]);
        }
            for(k=0;k<10-1;k++)
            {
                if(a[k]>a[k+1])
                {
                    count++;
                }
            }
            if(count==0 || count==9)
            {
                printf("Ordered\n");
            }
            else
            {
                printf("Unordered\n");
            }
    }
    return 0;
}
