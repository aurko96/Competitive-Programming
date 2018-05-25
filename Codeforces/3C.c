#include<stdio.h>
int main()
{
    char a;
    int i,count=0;
    for(i=1;i<=9;i++)
    {
        scanf("%c",&a);
        if(a=='.')
        {
            count++;


        }
    }
    if(count%2==0)
    {
        printf("second");
    }
    else
    {
        printf("first");
    }

}
