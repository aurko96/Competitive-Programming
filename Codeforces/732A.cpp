#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x,y,z;
    cin>>x>>y;
    for(i=1;;i++)
    {
        if((i*x)%10==y || (i*x)%10==0)
        {
            cout<<i<<"\n";
            return 0;
        }
    }
}
