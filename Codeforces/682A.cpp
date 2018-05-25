#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x,y,a,b=0;
    cin>>x>>y;
    for(i=1;i<=x;i++)
    {
        a=i%5;
        b+=(a+y)/5;
    }
    cout<<b;
}
