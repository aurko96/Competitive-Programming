#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long i,b,d,j,n,x=0,y,count=0,z,a[100005];
    cin>>n>>b>>d;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=b)
        {
            x=x+a[i];
        }
        if(x>d)
        {
            count++;
            x=0;
        }
    }
    cout<<count<<'\n';


}
