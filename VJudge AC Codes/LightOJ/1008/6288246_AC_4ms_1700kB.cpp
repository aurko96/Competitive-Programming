#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,t,x,y,a,b;
    cin>>t;
    for(i=1;i<=t;i++)
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
