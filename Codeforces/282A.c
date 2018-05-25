#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,b=0;
    char a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&a);

        if(n==1)
        {
            if(a=='X++')
            {
                b=0;
            }
            else if(a=='++X')
            {
                b=1;
            }
            else if(a=='X--')
            {
                b=0;
            }
            else if(a=='--X')
            {
                b=-1;
            }
        }
    }
    printf("%d",b);


}
