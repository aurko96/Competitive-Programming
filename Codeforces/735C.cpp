// use long long always

#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,n,x=1,y=1,z=0,count=0;
    cin>>n;
    for(i=0;;i++)
    {
        z+=x;
        j=x;
        if(z>=n) break;
        count++;
        x=y;
        y=y+j;
    }
    cout<<count<<endl;
}
