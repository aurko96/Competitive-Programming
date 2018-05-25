#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    istringstream iss(a);
    int n[100];
    int i=1;
    while(iss>>n[i])
    {
        cout<<'*'<<n[i]<<endl;
        ++i;
    }
    int p;
    while(--i)
    {
        p=n[i]*-2;
        cout<<p<<endl;
    }
}
