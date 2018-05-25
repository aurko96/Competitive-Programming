#include<stdio.h>
int main()
{
    long long a,b,c,x,y,n,temp,count,z=0;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        x=a;
        y=b;
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        z=0;
        while(a<=b)
        {
            n=a;
            count=1;
            while(n!=1)
            {
                if(n%2==0)
                {
                    n=n/2;
                }
                else
                {
                    n=3*n+1;
                }
                count++;
            }
            if(count>z)
            {
                z=count;
            }
            a++;
        }
        printf("%lld %lld %lld\n",x,y,z);
    }
    return 0;
}
