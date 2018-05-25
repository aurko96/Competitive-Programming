#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,j,n,t,x,y,z,p;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        x=0;
        z=0;
        p=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a);
            x=x+a;
            if(a==5)
            {
                z=1;
            }
            if(a==2)
            {
                p=1;
            }
        }
        y=x/n;
        if(z==1 && y>=4 && p==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}