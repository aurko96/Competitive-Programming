#include<bits/stdc++.h>
using namespace std;
char str[2][100002];
int hh,vv,cnt,up,down;
void func(int n)
{
    for(int i=0;i<n;i++)
    {
        if(str[0][i]=='*') up++;
        if(str[1][i]=='*') down++;
        if(up>0 && down>0) hh=1;
        if(up>1 || down>1)
        {
            vv++;
            up--;
            down--;
            if(up<0) up=0;
            if(down<0) down=0;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        hh=vv=cnt=up=down=0;
        cin>>n;
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<n;k++) cin>>str[j][k];
        }
        func(n);
        cout<<hh+vv<<"\n";
    }
}
