#include<stdio.h>
int main()
{
    int i,n,x,y,z,count1=0,count2=0,count3=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x==1)
        {
            count1++;
        }
        else if(x==2)
        {
            count2++;
        }
        else if(x==3)
        {
            count3++;
        }
    }
    if(count1>=count2 && count1>=count3)
    {
        y=count1;
    }
    else if(count2>=count1 && count2>=count3)
    {
        y=count2;
    }
    else
    {
        y=count3;
    }

    z=n-y;
    printf("%d",z);
}
