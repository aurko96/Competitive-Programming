#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,n,x,y;
    string s;
    cin>>s>>n;
    if(s[2]==':') s[2]=' ';
    istringstream iss(s);
    iss>>a>>b;
    x=n/60;
    y=n%60;
    a+=x;
    b+=y;
    if(b>=60)
    {
        b=b-60;
        a=a+1;
    }
    if(a>=24)
    {
        j=a/24;
        a=a-(24*j);
    }
    cout.fill('0');
    cout<<setw(2)<<a<<':'<<setw(2)<<b<<endl;
}
