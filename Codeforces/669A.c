#include<stdio.h>
int main()
{
    long long a=0,b=0,c,i,n;
    scanf("%I64d",&n);
    for(i=1;;i++)
    {
        a=a+i;
        if(a>n)
        {
            break;
        }
        printf("%d\n",i);
        b++;
        if(i==2)
        {
            i=0;
        }
    }
    printf("%I64d",b);
}
