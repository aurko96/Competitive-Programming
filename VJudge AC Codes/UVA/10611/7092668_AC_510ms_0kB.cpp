#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[100005],b[100005],i,j,m,n,x,y,z;
    while(scanf("%lld",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        scanf("%lld",&m);
        for(i=0;i<m;i++)
        {
            scanf("%lld",&b[i]);
        }

        for(i=0;i<m;i++)
        {
            x=y=0;
            for(j=0;j<n;j++)
            {
                if(a[j]<b[i])
                {
                    x=max(x,a[j]);
                }
                if(a[j]>b[i])
                {
                    y=a[j];
                    break;
                }

            }
            if(x!=0)
            {
                printf("%d ",x);
            }
            else
            {
                printf("X ");
            }
            if(y!=0)
            {
                printf("%d\n",y);
            }
            else
            {
                printf("X\n");
            }
        }

    }
    return 0;

}
