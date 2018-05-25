#include<bits/stdc++.h>
double a[1000005];
using namespace std;
int main()
{
    long long i,j,n,x,b,t;
    for(i=1;i<=1000001;i++)
    {
        a[i]=a[i-1]+log10(i);
    }
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>b;
        x=(a[n]/log10(b))+1;
        cout<<"Case "<<i<<": "<<(int)x<<endl;
    }
}
