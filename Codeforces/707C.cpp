#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,n,x,y,z;
    cin>>n;              // http://codeforces.com/blog/entry/46681
    if(n<3)
    {
        cout<<-1;
        return 0;
    }
    if(n%2==0)
    {
        x=((n*n)/4)+1;
        y=x-2;
        cout<<x<<" "<<y<<endl;
    }
    else
    {
        x=((n*n)+1)/2;
        y=((n*n)-1)/2;
        cout<<x<<" "<<y<<endl;
    }
}
