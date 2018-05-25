#include<stdio.h>
#include<string.h>
int main()
{
    int a[1000],b=0,c,i,n;
    char x[1000];
    scanf("%d",&n);
    scanf("%s",&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        if(x[i]=='>')
        {
            b=b+a[i];
        }
        else if(x[i]=='<')
        {
            b=b-a[i];
        }
    }
    //printf("%d\n",b);
    if(b>n || b<1)
    {
        printf("FINITE\n");
    }
    else
    {
        printf("INFINITE\n");
    }
    return 0;
}
