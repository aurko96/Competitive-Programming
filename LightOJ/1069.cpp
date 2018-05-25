#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x,y,a,b;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        if(x<=y)
        {
            a=(y*4)+(3*3)+(5*2);
            cout<<"Case "<<i<<": "<<a<<'\n';
        }
        else
        {
            b=x-y;
            a=((x+b)*4)+(3*3)+(5*2);
            cout<<"Case "<<i<<": "<<a<<'\n';
        }
    }

}
