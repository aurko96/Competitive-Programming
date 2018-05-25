#include<stdio.h>
int main()
{
    int a,i,x=0,y,z;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a);
        x=x+a;
    }
    if(x%5==0 && x>=5)
    {
        y=x/5;
        printf("%d",y);
    }
    else
    {
        printf("-1");
    }

}
