#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,m,x,y,word,not_word;
    char str[1005];
    while(gets(str))
    {
        word=0;
        not_word=1;
        for(i=0;str[i];i++)
        {
            if((str[i]>='A'&& str[i]<='Z') || (str[i]>='a'&& str[i]<='z'))
            {
                if(not_word)
                {
                    word++;
                    not_word=0;
                }

            }
            else
            {
                not_word=1;
            }
        }
        printf("%d\n",word);
    }
}
