#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,x,y,a=1,b;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        y=x*(x+1)/2;
        a=1;
        while(a<=x)
        {
            a=a*2;
            y=y-a;
            cout<<"a="<<a<<" "<<"y="<<y<<endl;
        }
        cout<<y<<endl;
    }

}
