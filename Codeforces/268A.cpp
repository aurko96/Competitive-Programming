#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[200],b[200],i,j,n,x=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                x++;
            }
        }
    }
    cout<<x;
}
