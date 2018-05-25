#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<k;i--)
    {
        if(n>=k)
        {
            printf("%d",i);
        }
        else
        {
            printf("0");
        }
    }
}
