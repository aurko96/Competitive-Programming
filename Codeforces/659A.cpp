#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,x,y;
    cin>>n>>a>>b;
    if(b<0)
    {
        b=(-b);
        for(i=a,j=1;j<=b;i--,j++)
        {
            if(i==1)
            {
                i=n;
                i++;
            }
            //cout<<"i="<<i<<endl<<"j="<<j<<endl;
        }
        cout<<i;
    }
    else if(b>0)
    {
        for(i=a,j=1;j<=b;i++,j++)
        {
            if(i==n)
            {
                i=1;
                i--;
            }
        }
        cout<<i;
    }
    else
    {
        cout<<a;
    }
}
