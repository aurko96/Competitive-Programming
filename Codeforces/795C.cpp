#include<stdio.h>
int ara3[100005],ara4[100005]
int main()
{
    int i,j,n,x,y,z=0;
    scanf("%d %d %d",&n,&x,&y);
    int ara[100005],ara2[100005];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara2[i]);
    }
    for(i=x-1;i<y;i++)
    {
        ara3[ara[i]]++;
        ara4[ara2[i]]++;
    }
    for(i=x-1;i<y;i++)
    {
        if(ara3[ara[i]]!=ara4[ara[i]]) z=1;
    }
    if(z==1) printf("LIE\n");
    else printf("TRUTH\n");
}
