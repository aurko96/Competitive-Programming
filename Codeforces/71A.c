#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int length;
        char st[100];
        scanf("%s",st);
        length= strlen(st);
        if(length<=10)
        {
            printf("%s\n",st);
        }
        else
        {
            printf("%c",st[0]);
            printf("%d",length-2);
            printf("%c\n",st[length-1]);
        }
    }
}
