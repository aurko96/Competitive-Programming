#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    char a[1000];
    scanf("%s",&a);
    n=strlen(a);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j=j+2)
        {
            if(a[j]>a[j+2])
            {
                int temp=a[j+2];
                a[j+2]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%s",a);
}
