#include<stdio.h>
#include<string.h>
int main()
{
    char st[1000];
    int i,n,count=0,flag=0,count1=0,flag1=0;
    scanf("%s",&st);
    n=strlen(st);
    if(st[0]>=97 && st[0]<=122)
    {
        for(i=1;i<n;i++)
        {
            if(st[i]>=97 && st[i]<=122)
            {
                count++;

            }
            else if(st[i]>=65 && st[i]<=90)
            {
                flag++;

            }
        }

        if(count==n-1)
        {
            if(n==1)
            {
                st[0]=st[0]-32;
                printf("%s",st);
            }
            else
            {
                printf("%s",st);
            }
        }
        else if(flag==n-1)
        {
            st[0]=st[0]-32;
            for(i=1;i<n;i++)
            {
                st[i]=st[i]+32;
            }
            printf("%s",st);

        }
        else
        {
            printf("%s",st);
        }
    }
    else if(st[0]>=65 && st[0]<=90)
    {
       for(i=1;i<n;i++)
       {
           if(st[i]>=65 && st[i]<=90)
           {
               count1++;
           }

       }
       if(count1==n-1)
       {
           st[0]=st[0]+32;
           for(i=1;i<n;i++)
           {
               st[i]=st[i]+32;
           }
           printf("%s",st);
       }
       else
       {
           printf("%s",st);
       }

    }


}
