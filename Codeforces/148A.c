#include<stdio.h>
int main()
{
    long long i,k,l,m,n,d,count=0;
    scanf("%I64d %I64d %I64d %I64d %I64d",&k,&l,&m,&n,&d);
    for(i=1;i<=d;i++)
    {
        if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0)
        {
            count++;
            //printf("%d ",i);
        }
    }
    printf("%I64d",d-count);

}
