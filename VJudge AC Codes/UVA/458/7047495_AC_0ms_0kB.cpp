#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[3000];
    int i,j,n,x,y,z;
    while(gets(str))
    {
        n=strlen(str);
        for(i=0;i<n;i++)
        {
            str[i]=str[i]-7;
            printf("%c",str[i]);
        }
        printf("\n");
    }

}
