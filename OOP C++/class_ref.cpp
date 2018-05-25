#include<bits/stdc++.h>
using namespace std;
int x=5;
int& foo()
{
    x=30;
    return x;
}
int main()
{
    foo()=95;
    cout<<x<<endl;
    foo()=foo()+3;
    cout<<x<<endl;
}
