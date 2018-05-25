#include<stdio.h>
int main()
{
    int i,n,a[200],e=0,o=0,x=0,y=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e++;
            x=x+i;
        }
        else if(a[i]%2!=0)
        {
            o++;
            y=y+i;
        }
    }
    if(e==1)
    {
        printf("%d",x+1);
    }
    else if(o==1)
    {
        printf("%d",y+1);
    }
}
