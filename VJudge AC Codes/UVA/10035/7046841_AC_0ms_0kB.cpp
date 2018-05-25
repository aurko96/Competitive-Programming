#include<stdio.h>
int main()
{
    int i,m,n,x,y,z,a,b,c,d;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        d=0;
        z=0;
        x=m;
        y=n;
        if(m==0 && n==0)
        {
            break;
        }
        while(x>0 || y>0)
        {
            a=x%10;
            a=a+d;
           // printf("%d\n",a);
            x=x/10;
            b=y%10;
            y=y/10;
            //printf("%d\n",b);
            c=a+b;
            d=c/10;
           // printf("%d %d\n",c,d);
            z=z+d;
            //printf("%d\n",z);

        }
        if(z==0)
        {
            printf("No carry operation.\n");
        }
        else if(z==1)
        {
            printf("1 carry operation.\n");
        }
        else
        {
            printf("%d carry operations.\n",z);
        }
    }

    return 0;
}
