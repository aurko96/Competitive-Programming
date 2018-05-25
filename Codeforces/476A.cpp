#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,x,y=0;
    cin>>n>>m;
    if(n%2==0)
    {
        x=n/2;
    }
    else
    {
        x=(n+1)/2;
    }
    if(n<m)
    {
        cout<<-1;
        return 0;
    }
    for(i=x;i<=n;i++)  //number of moves to climb is any number between half of steps to total steps
    {
        if(i%m==0)
        {
            y=1;
            cout<<i;
            return 0;
        }
    }
    if(y==0)
    {
        cout<<-1;
    }
}
