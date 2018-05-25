#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,i,j,k,n,x=0,y=0;
    cin>>n;
    for(i=n,j=n-1,k=0;i>1;i--,j--,k++)
    {
        x=x+(i+(j*k));
    }
    cout<<x+1;
}
