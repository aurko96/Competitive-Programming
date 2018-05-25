#include<stdio.h>
int main()
{
    int a,b,c;
    while(1)
    {
        scanf("%d %d",&a,&b);
        if(a==-1 && b==-1)
        {
            return 0;
        }
        if(a>=b)
        {
            c=a-b;
            if(c>50)
            {
                c=100-c;
            }
            printf("%d\n",c);
        }
        else if(b>=a)
        {
            c=b-a;
            if(c>50)
            {
                c=100-c;
            }
            printf("%d\n",c);
        }
    }
    return 0;
}

