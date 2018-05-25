#include<stdio.h>
int main()
{
    int i,j,m,n,count=0,temp=1;
    char a[200];
    scanf("%d",&n);
    scanf("%s",&a);
    m=strlen(a);
    for(j=n;j>0;j=j-m)
    {
        temp=temp*j;
    }
    printf("%d",temp);
}
