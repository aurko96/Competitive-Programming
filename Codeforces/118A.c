#include<stdio.h>
int main()
{
    char c[1000];
    int i,n;
    scanf("%s",&c);
    n=strlen(c);
    for(i=0;i<n;i++)
    {
        if(c[i]!='A'&&c[i]!='E'&&c[i]!='I'&&c[i]!='O'&&c[i]!='U'&&c[i]!='Y'&&c[i]!='a'&&c[i]!='e'&&c[i]!='i'&&c[i]!='o'&&c[i]!='u'&&c[i]!='y')
        {
            if(c[i]>=65 && c[i]<=90)
            {
                c[i]=c[i]+32;

            }
            printf(".%c",c[i]);
        }
    }
}
