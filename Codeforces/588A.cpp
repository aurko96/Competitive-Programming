#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,n,a,b,x,y=0,z;
    cin>>n;
    while(n)
    {
        i++;
        cin>>a>>b;
        if(i==1)
        {
           x=b;
        }
        if(x>b)
        {
            x=b;
            y=y+(a*x);
        }
        else if(x<=b)
        {
            y=y+(a*x);
        }
        n--;
    }
    cout<<y;
}
