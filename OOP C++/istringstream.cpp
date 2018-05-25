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
        p=n[i]*2;
        cout<<p<<endl;
    }
    cout<<iss.str()<<endl;

    stringstream ss;
    ss<<100<<" "<<200<<" "<<300;
    int x,y,z;
    ss>>x>>y>>z;
    cout<<x<<" "<<y<<" "<<z<<endl;
    string b=ss.str();
    cout<<b<<endl;
}
