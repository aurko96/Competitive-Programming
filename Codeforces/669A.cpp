#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    if(n%3==0)
    {
        x=2*(n/3);
    }
    else
    {
        x=(2*(n/3))+1;
    }
    cout<<x;
}
