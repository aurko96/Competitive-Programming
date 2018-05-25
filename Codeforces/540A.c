#include<stdio.h>
int main()
{
    int x=0,c,i,j,n;
    char a[1000],b[1000];
    scanf("%d",&n);
    scanf("%s %s",&a,&b);
    for(i=0;i<n;i++)
    {
        c=a[i]-b[i];
        if(c<0)
        {
            c=(-c);
        }
        if(c>=5)
        {
            c=10-c;
        }
        x=x+c;
    }
    printf("%d",x);
}
