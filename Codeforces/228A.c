#include<stdio.h>
int main()
{
    long long a,b,c,d,count=0;
    scanf("%I64d %I64d %I64d %I64d",&a,&b,&c,&d);
    if(a==b || a==c || a==d)
    {
        count++;
    }
    if(b==c || b==d)
    {
        count++;
    }
    if(c==d)
    {
        count++;
    }
    printf("%I64d",count);

}
