#include<stdio.h>
int main()
{
    int c,d,i,n,x=0,y=0,z,count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&c);
        count=x;
        scanf("%d",&d);
        c=count-c;
        x=c+d;
        if(x>y)
        {
            y=x;
        }
    }
    printf("%d",y);
}
