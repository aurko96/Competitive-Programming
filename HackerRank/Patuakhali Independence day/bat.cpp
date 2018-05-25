#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x,y;
    string str,str2,str3,str4,str5;
    //str=" |\n/ \\\n| |\n| |\n _ ";
    cin>>n>>x;
    y=n/x;
    str2="  |  ";
    str3=" / \\ ";
    str4=" | | ";
    str5=" | | ";
    str="  -  ";
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<str2;
        }
        cout<<"\n";
        for(j=0;j<y;j++)
        {
            cout<<str3;
        }
        cout<<"\n";
        for(j=0;j<y;j++)
        {
            cout<<str4;
        }
        cout<<"\n";
        for(j=0;j<y;j++)
        {
            cout<<str5;
        }
        cout<<"\n";
        for(j=0;j<y;j++)
        {
            cout<<str;
        }
        cout<<"\n";
    }
}
