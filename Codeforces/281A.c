#include<stdio.h>
int main()
{
    char st[1000];
    int i,n;
    scanf("%s",&st);
    n=strlen(st);
    if(st[0]>=97 && st[0]<=122)
    {
        st[0]=st[0]-32;
    }
    for(i=1;i<=n;i++)
    {
        if(st[i]>=65 && st[i]<=90)
        {
            st[i]=st[i]+32;
        }
    }

    printf("%s",st);

}
