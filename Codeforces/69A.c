#include<stdio.h>
int main()
{
    int n,i,a=0,b=0,c=0,x,y,z;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d %d %d",&x,&y,&z);
        a=a+x;
        b=b+y;
        c=c+z;
        n--;
    }
    if(a==0 && b==0 && c==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }


}
