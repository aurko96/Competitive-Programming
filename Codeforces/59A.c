#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,count=0,flag=0;
    char a[1000];
    scanf("%s",&a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            count++;
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            flag++;
        }
    }
    if(count>flag)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]>=97 && a[i]<=122)
            {
                a[i]=a[i]-32;
            }

        }
        printf("%s",a);
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]>=65 && a[i]<=90)
            {
                a[i]=a[i]+32;
            }

        }
         printf("%s",a);
    }

}
