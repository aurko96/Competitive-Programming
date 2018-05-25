#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    int i,n,x=0;
    scanf("%s %s",&a,&b);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;

        }
        if(b[i]>=65 && b[i]<=90)
        {
            b[i]=b[i]+32;
        }
        if(a[i]<b[i])
        {
            x=-1;
            break;
        }
        else if(b[i]<a[i])
        {
            x=1;
            break;
        }


    }
    printf("%d",x);
}
