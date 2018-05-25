#include<stdio.h>
int main()
{
    int i,n,m,x,count;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        count=0;
        if(i%m==0)
        {
            count++;
            n=n+count;
        }
    }
    printf("%d",n);
}
