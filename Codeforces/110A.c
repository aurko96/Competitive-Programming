#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,count4=0,count7=0;
    char a[1000];
    scanf("%s",&a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='4')
        {
            count4++;
        }
        if(a[i]=='7')
        {
            count7++;
        }

    }
    //printf("%d %d\n",count4,count7);

    if(count4+count7==4||count4+count7==7||count4+count7==47||count4+count7==74)
    {
        printf("YES");
    }
    else if(count4+count7==447||count4+count7==474||count4+count7==477||count4+count7==774||count4+count7==744||count4+count7==747)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }


}
