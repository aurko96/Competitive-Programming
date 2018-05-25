#include<stdio.h>
#include<string.h>
int main()
{
    char a[100000],b[100000];
    int i,j,k,n,x,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",&a);
        x=strlen(a);
        for(j=x-1,k=0;j>=0,k<x;j--,k++)
        {
            b[k]=a[j];
        }
        b[k]='\0';
        //printf("%s %s\n",a,b);
        if(strcmp(b,a)==0)
        {
            printf("Case %d: Yes\n",i);
        }
        else
        {
            printf("Case %d: No\n",i);
        }
    }
    return 0;
}
