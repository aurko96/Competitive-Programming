#include<stdio.h>
#include<string.h>
int main()
{
    char st[1000];
    int i,n;
    scanf("%s",&st);
    n=strlen(st);
    /*for(i=1;i<=n;i++)
    {
        if(st[0]>=97 && st[0]<=122 && st[i]>=65 && st[i]<=90)
        {
            st[0]=st[0]-32;
            st[i]=st[i]+32;
        }
        else if(st[0]>=65 && st[0]<=90 && st[i]>=65 && st[i]<=90)
        {
            st[i]=st[i]+32;
        }
        else
            goto here;
    }
    here:
    printf("%s",st);*/
    if(st[0]>=97 && st[0]<=122)
    {
        for(i=0;i<=n;i++)
        {
            if(st[i+1]>=97 && st[i+1]<=122)
            {
                st[0]=st[0]-32;
                printf("%c",st[i]);
            }
            else if(st[i+1]>=65 && st[i+1]<=122)
            {
                st[0]=st[0]-32;
                st[i]=st[i]+32;
                printf("%c",st[i]);
            }
        }
    }
    else /*if(st[0]>=65 && st[0]<=90)
    {
        if(st>=65 && st<=90)
        {
            printf("%s",st);
        }
        else
        {
            st[0]=st[0]-32;
            printf("%s",st);
        }*/
        printf("%s",st);


}
