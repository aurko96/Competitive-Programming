#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,b,c,x=0,y;
    string a;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        cin>>b>>c;
        if(b>=2400 && c>b)
        {
            x=1;
        }
    }
    if(x==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
