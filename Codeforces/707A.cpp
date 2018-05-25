#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,count=0;
    char ch;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>ch;
            if(ch=='C' || ch=='M' || ch=='Y')
            {
                count=1;
            }
        }
    }
    if(count) cout<<"#Color";
    else cout<<"#Black&White";
}
