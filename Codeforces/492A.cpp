#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x=0,y=0,z=0,a;
    cin>>n;
    for(i=1;;i++)
    {
        z++;
        x=x+i;
        y=y+x;
        if(y>=n)
        {
            break;
        }
        cout<<"x="<<x<<endl<<"y="<<y<<endl<<"z="<<z<<endl;;
    }
    cout<<z;
}
