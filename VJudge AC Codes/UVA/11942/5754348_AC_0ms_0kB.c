#include<stdio.h>
int main()
{
    int i,t,a[1000],cnt=0,flag=0,count=0,j,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        for(j=0;j<10;j++)
        {
            flag=0,count=0;
            scanf("%d",&a[j]);
            cnt++;
        }
        for(k=0;k<cnt-1;k++)
        {
            if(a[k]>a[k+1])
            {
                flag++;
            }
            else if(a[k]<a[k+1])
            {
                count++;
            }
        }
        if(i==1) printf("Lumberjacks:\n");
        if(flag==cnt-1 && count==0)
           {
            printf("Ordered\n");
           }
        else if(flag==0 && count==cnt-1)
           {
                 printf("Ordered\n");
            }
             else
           {
                 printf("Unordered\n");
           }
            cnt=0;
    }
    return 0;
}
