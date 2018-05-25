#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum=0,x;
    cin>>a>>b;
    while(1)
    {
        sum=sum+(a/b);
        x=a%b;
        a=b;
        b=x;
        if(x==0)
        {
            break;
        }
    }
    cout<<sum;
}
