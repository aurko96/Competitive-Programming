#include<stdio.h>
int main()
{
    char c[1000];
    int i,n,count=0;
    scanf("%d",&n);
    scanf("%s",&c);
    for(i=0;i<n;i++)
    {
        if(c[i]==c[i+1])
        {
            count++;
        }
    }
    printf("%d",count);
}
