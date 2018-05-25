#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int i,j,t,n,x,y,z;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int count=0;
        cin>>x>>y;
        while(y%x)
        {
            x/=2;
            count++;
        }
        while(x!=y)
        {
            x*=2;
            count++;
        }
        cout<<count<<"\n";
    }
}
