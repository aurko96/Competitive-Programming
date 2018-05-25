#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,p,x,y,z;
    char a[1000];
    scanf("%d %d",&n,&p);
    scanf("%s",&a);
    for(i=1;i<=p;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            if(a[j]=='G' && a[j-1]=='B')
            {
                a[j-1]='G';
                a[j]='B';
                j--;
            }
        }
    }
    printf("%s",a);
}