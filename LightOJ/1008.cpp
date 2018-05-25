#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,t,x,y,a,b;
    cin>>t;
    for(i=1;i<=t;i++)             //  http://kaikobudsarkar.blogspot.com/2015/02/c-solution-of-light-online-judge-1008.html
    {
        cin>>n;
        a=ceil(sqrt((double)n));
        b=(a*a)-n;
        if(b<a)
        {
            x=a;
            y=b+1;
        }
        else
        {
            y=a;
            x=(2*a)-(b+1);
        }
        if(a%2!=0)
        {
            swap(x,y);
        }
        cout<<"Case "<<i<<": "<<x<<" "<<y<<endl;
    }
}
