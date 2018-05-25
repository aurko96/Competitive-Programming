#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,n,x;
    cin>>n;
    if(n%2!=0)
    {
        cout<<-1;
        return 0;
    }
    for(i=2;i<=n;i--)
    {
        cout<<i<<" ";
        if(i%2!=0)
        {
            i+=4;
        }
    }
}
