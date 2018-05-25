#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    if(n%5!=0)
    {
        k=(n/5)+1;
        printf("%d\n",k);
    }
    else if(n%5==0)
    {
        k=(n/5);
        printf("%d\n",k);
    }
    else
    {
        printf("1\n");
    }

}
