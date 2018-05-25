#include<stdio.h>
int main()
{
    char a[100];
    int i,j,t,n,p,x=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        x=0;
        printf("Case %d:\n",i);
        for(j=1;j<=n;j++)
        {
            scanf("%s",&a);
            if(a[0]=='d')
            {
                scanf("%d",&p);
                x=x+p;
            }
            else if(a[0]=='r')
            {
                printf("%d\n",x);
            }

        }
    }

    return 0;
}
