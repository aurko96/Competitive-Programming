#include<stdio.h>
int main()
{
    int a,b,n,x,count=0;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d %d",&a,&b);
        x=b-a;
        if(x>=2)
        {
            count++;
        }
        n--;
    }
    printf("%d",count);
}
