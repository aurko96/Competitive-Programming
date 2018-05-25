#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,n,a,x,y=1,z;
    cin>>n;
    while(n)
    {
        i++;
        cin>>a;
        if(i==1)
        {
            x=a;
        }
        if(x!=a)
        {
            x=a;
            y++;
        }
        n--;
    }
    cout<<y;
}
