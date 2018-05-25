#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,t,x,y,z,a[200],b,count;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>x>>y;
        count=z=0;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(j=0;j<n;j++)
        {
            z=z+a[j];
            ++count;
            if(count<=x && z<=y)
            {
                continue;
            }
            else
            {
                count--;
                break;
            }
        }
        cout<<"Case "<<i<<": "<<count<<endl;
    }
}
