#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n;
    string str[]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    cin>>n;
    n--;
    while(n>4)
    {
        n-=5;
        n/=2;
    }
    cout<<str[n-1];
}
