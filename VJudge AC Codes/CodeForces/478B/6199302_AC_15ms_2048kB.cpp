#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long mx,mn,x,y,z;
    cin>>x>>y;
    mx=((x-y+1)*(x-y))/2;
    z=x/y;
    if(x%y==0)
    {
        mn=(((z)*(z-1))/2)*y;
    }
    else
    {
        mn=(((z)*(z-1))/2)*y+(z*(x%y));
    }
    cout<<mn<<" "<<mx<<endl;
    //main();
}
