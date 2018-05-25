#include<stdio.h>
int main()
{
    int a[200],b,c,i,n,x,y,z,p,q,r,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==n)
        {
            b=i;
        }
        if(a[i]==1)
        {
            c=i;
        }
    }
    if(b>c)
    {
        x=b;
        y=c;
    }
    else
    {
        x=c;
        y=b;
    }

    q=x-y;
    r=n-(x+1);
    s=(y+1)-1;
    if(r>=s)
    {
        z=q+r;
    }
    else if(r<s)
    {
        z=q+s;
    }
    //printf("%d %d %d\n",q,r,s);
    printf("%d",z);
}
