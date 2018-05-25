#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,y,a,b,c;
    cin>>x;
    a=sqrt(1+(4*2*x));
    b=a-1;
    n=b/2;
    c=(n*(n+1))/2;
    if(c==x)
    {
        cout<<n<<endl;
    }
    else
    {
        cout<<x-c<<endl;
    }
    //main();
}
