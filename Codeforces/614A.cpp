#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long i,n,x,y,z,a=1,b,count=0;
    cin>>x>>y>>z;
    for(;;)
    {
        if(a>y)
        {
            break;
        }
        else if(a>=x && a<=y)
        {
            count++;
            cout<<a<<" ";
        }
        //cout<<a<<" ";
        if(a>y/z)
        {
            break;
        }
        a=a*z;

    }
    //cout<<count;
    if(count==0)
    {
        cout<<-1;
    }
}
