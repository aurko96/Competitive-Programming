#include<stdio.h>
int main()
{
    int i,n,j,a[200],b[200],x,y,z,p,count=0,count1=0;
    scanf("%d",&n);
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&y);
        a[y]=1;
    }
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        scanf("%d",&z);
        b[z]=1;
    }

    for(i=1;i<=n;i++)
    {
        if(a[i]==1 || b[i]==1)
        {
            count++;
        }
    }
    //printf("%d\n",count);
    if(count==n)
    {
        printf("I become the guy.");
    }
    else
    {
        printf("Oh, my keyboard!");
    }
}
