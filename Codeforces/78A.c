#include<stdio.h>
#include<string.h>

int main()
{
    char a[200],b[200],c[200];
    int i,n,x=0,y=0,z=0,m,p;
    gets(a);
    n=strlen(a);
    gets(b);
    m=strlen(b);
    gets(c);
    p=strlen(c);

    for(i=0;i<n;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            x++;
        }
    }
    for(i=0;i<m;i++)
    {
        if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
        {
            y++;
        }
    }
    for(i=0;i<p;i++)
    {
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
        {
            z++;
        }
    }
    if(x==5 && y==7 && z==5)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

}
