#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,n,x,y,z;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        if(y==10) z=(x*10);
        else z=(x*10)+y;
        cout<<"Case "<<i+1<<": "<<z<<"\n";
    }
}
