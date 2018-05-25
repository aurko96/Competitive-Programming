#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,x,y,z;
    char a[1000];
    scanf("%s",&a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B')
        {
            a[i+2]=' ';
            a[i]=a[i+1]=a[i+2];
        }
    }
    printf("%s",a);
}
