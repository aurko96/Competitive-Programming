#include<stdio.h>
int main()
{
    char a[1000],b[1000];
    int i,n;
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

    }
        if(a<b)
        {
            printf("-1");
        }
        else if(b<a)
        {
            printf("1");
        }
        else if(a==b)
            printf("0");
}
