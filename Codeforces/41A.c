#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000];
    int i,m,n,flag=0;
    scanf("%s %s",&a,&b);
    m=strlen(a);
    n=strlen(b);
    for(i=1;i<=m;i++)
    {
        if(a[i-1]==b[m-i])
        {
            flag++;
        }
    }
    if(flag==m)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
