#include<stdio.h>
int main()
{
    int i,n,a,b,c,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        c=a*b;
        if(a==1 || b==1)
        {
            x=c;
            printf("Case %d: %d\n",i,x);
        }
        else if(a==2 && b==2)
        {
            x=c;
            printf("Case %d: %d\n",i,x);
        }
        else if(a==2 && b==4)
        {
            x=b;
            printf("Case %d: %d\n",i,x);
        }
        else if(a==4 && b==2)
        {
            x=a;
            printf("Case %d: %d\n",i,x);
        }
        else if(a==2 && b%4==0)
        {
            x=b;
            printf("Case %d: %d\n",i,x);
        }
        else if(b==2 && a%4==0)
        {
            x=a;
            printf("Case %d: %d\n",i,x);
        }
        else if(a==2 && b%4==1)
        {
            x=b+1;
            printf("Case %d: %d\n",i,x);
        }
        else if(b==2 && a%4==1)
        {
            x=a+1;
            printf("Case %d: %d\n",i,x);
        }
        else if(a==2 && b%4==2)
        {
            x=b+2;
            printf("Case %d: %d\n",i,x);
        }
        else if(b==2 && a%4==2)
        {
            x=a+2;
            printf("Case %d: %d\n",i,x);
        }
        else if(a==2 && b%4==3)
        {
            x=b+1;
            printf("Case %d: %d\n",i,x);
        }
        else if(b==2 && a%4==3)
        {
            x=a+1;
            printf("Case %d: %d\n",i,x);
        }
        else if(c%2==0)
        {
            x=c/2;
            printf("Case %d: %d\n",i,x);
        }
        else if(c%2!=0)
        {
            x=(c+1)/2;
            printf("Case %d: %d\n",i,x);
        }
    }
    return 0;
}

/*
6
2 2
2 4
2 5
2 6
2 8
2 10
*/
