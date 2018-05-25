#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<2*(i+1)-1;k++)
        {
            if(k==0 || k==2*(i+1)-2)
            {
                printf("0 ");
            }
            if(k==i)
            {
                printf("%d",i);
            }

        }
        printf("\n");
    }
}
