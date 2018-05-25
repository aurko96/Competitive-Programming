#include <stdio.h>

int main()
{
    char ara[115][115];
    int i,j;
    for(i=0;i<110;i++)for(j=0;j<110;j++)ara[i][j]=' ';
    int r=0,g,col=0;
    while(gets(ara[r]))
    {
        g = strlen(ara[r]);
        if(g>col)col=g;
        ara[r][g]=' ';
        r++;
    }
    for(j=0;j<col;j++)
    {
        for(i=r-1;i>=0;i--)
        {
            printf("%c",ara[i][j]);
        }
        printf("\n");
    }
    return 0;
}
