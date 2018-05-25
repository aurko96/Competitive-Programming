#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int n,i,x;
    cin>>n>>a>>b;
    if((n>=1 && n<=4 || n==7) && b[0]=='w')
    {
        cout<<52;
    }
    else if((n==5 || n==6) && b[0]=='w')
    {
        cout<<53;
    }
    else if(n>=1 && n<=29 && b[0]=='m')
    {
        cout<<12;
    }
    else if(n==30 && b[0]=='m')
    {
        cout<<11;
    }
    else if(n==31 && b[0]=='m')
    {
        cout<<7;
    }
}
