#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n,x,y;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        y=0;
        for(j=0;j<n;j++)
        {
            cin>>x;
            if(x>=0)
            {
                y=y+x;
            }
        }
        cout<<"Case "<<i<<": "<<y<<endl;
    }
}
