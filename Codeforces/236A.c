#include<stdio.h>
#include<string.h>
int main()
{
    char st[1000];
    int i,length;
    scanf("%s",&st);
    for(i=0;i<1;i++)
    {
       length=i;
       length=strlen(st);
    }

        if(length%2==0)
        {
            printf("Chat with her");
        }
        if(length%2!=0)
        {
            printf("Ignore him");
        }



}
