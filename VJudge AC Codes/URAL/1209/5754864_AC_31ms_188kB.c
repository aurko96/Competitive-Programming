#include<stdio.h>
#include<math.h>

int main()
{
    long long a,i,n,x,y,z,count;
    scanf("%I64d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%I64d",&a);
        x=8*a-7;
        y=sqrt(x);
        z=y*y;
        if(z==x)
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }

    }
    return 0;

}
