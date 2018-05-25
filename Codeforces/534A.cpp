#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x,y;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
        cout<<1;
        return 0;
    }
    if(n==2)
    {
        cout<<1<<endl;
        cout<<1;
        return 0;
    }
    if(n==3)
    {
        cout<<2<<endl;
        cout<<1<<" "<<3;
        return 0;
    }
    if(n%2==0)
    {
        cout<<n<<endl;
        for(i=2;i<=n;i+=2)
        {
            cout<<i<<" ";
            if(i==n)
            {
                i=-1;
            }
        }
    }
    else
    {
        cout<<n<<endl;
        for(i=1;i<=n;i+=2)
        {
            cout<<i<<" ";
            if(i==n)
            {
                i=0;
            }
        }
    }
}
