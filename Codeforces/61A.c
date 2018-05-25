#include<stdio.h>
#include<string.h>
int main()
{
    int a[1000],b[1000],i,j,n;
    for(i=0;;i++)
    {
        scanf("%s %s",&a,&b);
        n=strlen(a);
        if(i==n)
        {
            break;
        }
        if(a[i]==b[i])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }

    }

}
