#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,n,x=0;
    cin>>a>>b;
    for(i=1;x<b;i++)
    {
        if(i==a+1)
        {
            i=1;
        }
        x=x+i;
        //cout<<"i="<<i<<endl<<"x="<<x<<endl;
    }
    if(x>b)
    {
        x=x-(i-1);
        //cout<<x<<" "<<i<<endl;
    }
    cout<<b-x;
}
