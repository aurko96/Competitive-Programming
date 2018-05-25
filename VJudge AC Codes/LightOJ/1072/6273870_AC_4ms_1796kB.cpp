#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    double i,a,b,r,R,n,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {                       //http://light-online-judge.blogspot.com/2012/05/lightoj-1072-calm-down.html
        cin>>R>>n;
        a=sin(pi/n);
        r=a*R/(a+1);
        cout.precision(9);
        cout<<fixed<<"Case "<<(int)i<<": "<<r<<endl;
    }
}
