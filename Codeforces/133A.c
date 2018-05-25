#include<stdio.h>
int main()
{
    char c;
    int count=0;
    for(;;)
    {
        scanf("%c",&c);
        if(c==10)
        {
            break;
        }
        if(c=='H' || c=='Q' || c=='9')
        {
            count=1;
        }

    }
    if(count==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
