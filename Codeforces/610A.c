#include<stdio.h>
int main()
{
    long long i,n,x,a,b,count=0;
    scanf("%I64d",&n);
    x=n/2;
    if(x%2==0 && x>0)
    {
        for(i=1;i<x;i++)
        {
            a=(x-i)*2;
            b=(2*i);
            if(a==b)
            {
                break;
            }
            if(a+b==n)
            {
                count++;
            }
        }
    }
    else if(x%2!=0 && x>0)
    {
        for(i=1;i<x-1;i++)
        {
            a=(x-i)*2;
            b=(2*i);
            if(a==b)
            {
                break;
            }
            if(a+b==n)
            {
                count++;
            }
        }
    }

    printf("%I64d",count);
    main();
}
