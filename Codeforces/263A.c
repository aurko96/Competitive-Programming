#include<stdio.h>
int main()
{
    int a[100][100],i,j,x,y,p,q,m,n;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }
    p=x-2;
    if(p<0)
    {
        p=(-p);
    }
    q=y-2;
    if(q<0)
    {
        q=(-q);
    }
    m=p+q;
    printf("%d",m);

}
