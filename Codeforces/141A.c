#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,m,n,p,x=0,y=0,z=0,count=0;
    char a[1000],b[1000],c[1000];
    scanf("%s %s %s",&a,&b,&c);
    m=strlen(a);
    n=strlen(b);
    p=strlen(c);
    for(i=0;i<m;i++)
    {
        x=x+a[i];
    }
     for(i=0;i<n;i++)
    {
        y=y+b[i];
    }
     for(i=0;i<p;i++)
    {
        z=z+c[i];
    }

    j=x+y;
    if(j==z)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

}
