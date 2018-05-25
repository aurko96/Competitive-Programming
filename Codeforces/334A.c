#include<stdio.h>
int main()
{
    int i,j,k=1,n,sum=0,a,b,c,d;
    scanf("%d",&n);
    d=n*n;
    for(i=1;i<=d;i++)
    {
        sum=sum+i;
    }
    c=sum/n;

    for(i=1;i<=n;i++)
    {
       for(j=1;j<=d;j++)
       {
           printf("%d %d ",k,d);
           d--;
           if(k==n/2*i)
           {
               k++;
               break;
           }
           k++;
       }
       printf("\n");
    }
}
