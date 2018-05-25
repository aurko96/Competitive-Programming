#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,n,x,y,z;
    cin>>n>>x>>y>>z;
    if(n%4==0) cout<<0<<"\n";
    else if(n%4==1)
    {
        if(z<=(x*3) && z<=(x+y))
        {
            cout<<z<<"\n";
        }
        else
        {
            if((x*3)<(x+y))
            {
                cout<<x*3<<"\n";
            }
            else
            {
                cout<<x+y<<"\n";
            }
        }
    }
    else if(n%4==2)
    {
        if(y<=(x*2) && y<=(z*2))
        {
            cout<<y<<"\n";
        }
        else
        {
            if((x*2)<(z*2))
            {
                cout<<x*2<<"\n";
            }
            else cout<<z*2<<"\n";
        }
    }
    else if(n%4==3)
    {
        if(x<=(y+z) && x<=(z*3))
        {
            cout<<x<<"\n";
        }
        else
        {
            if((y+z)<(z*3))
            {
                cout<<y+z<<"\n";
            }
            else cout<<z*3<<"\n";
        }

    }
    //main();
}
