#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,x,y=0,z=1000000002,a[200005];
    string s;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(s[i]=='R' && s[i+1]=='L')
        {
            y=1;
           x=(a[i+1]-a[i])/2;
           z=min(z,x);
        }
    }
    if(y==0)
    {
        cout<<-1<<'\n';
    }
    else
    {
        cout<<z<<'\n';
    }
}
