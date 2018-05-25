#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[10];
    int i,j,n,b,c,x=0,y=0;
    for(i=0;i<8;i++)
    {
        cin>>a[i];
        for(j=0;j<8;j++)
        {
            if(a[i][j]=='Q')x=x+9;
            if(a[i][j]=='R')x=x+5;
            if(a[i][j]=='B')x=x+3;
            if(a[i][j]=='N')x=x+3;
            if(a[i][j]=='P')x=x+1;
            if(a[i][j]=='q')y=y+9;
            if(a[i][j]=='r')y=y+5;
            if(a[i][j]=='b')y=y+3;
            if(a[i][j]=='n')y=y+3;
            if(a[i][j]=='p')y=y+1;
        }
    }
    if(x>y)
    {
        cout<<"White";
    }
    else if(x<y)
    {
        cout<<"Black";
    }
    else
    {
        cout<<"Draw";
    }

}
