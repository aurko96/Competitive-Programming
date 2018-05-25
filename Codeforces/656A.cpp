#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    long long a;
    cin>>n;
    if(n==13)
    {
        cout<<8092;
    }
    else if(n>13)
    {
        x=n-13;
        a=8092*pow(2,x);
        cout<<a;
    }
    else
    {
        a=pow(2,n);
        cout<<a;
    }


}
