#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,x,y;
    cin>>n;
    a=n/7;
    b=n%7;
    if(b==0)
    {
        a=a*2;
        cout<<a<<" "<<a;
    }
    else if(b==1)
    {
        x=2*a;
        y=(2*a)+b;
        cout<<x<<" "<<y;
    }
    else if(b>1 && b<6)
    {
        x=2*a;
        y=(2*a)+2;
        cout<<x<<" "<<y;
    }
    else if(b==6)
    {
        y=(2*a)+2;
        x=y-1;
        cout<<x<<" "<<y;
    }
    //main();
}
