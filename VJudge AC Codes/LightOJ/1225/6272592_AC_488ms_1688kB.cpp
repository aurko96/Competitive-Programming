#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int i,j,n,x,y;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        b=a;
        reverse(a.begin(),a.end());
        if(a==b)
        {
            cout<<"Case "<<i<<": Yes"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": No"<<endl;
        }
    }
}