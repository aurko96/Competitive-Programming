#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,a[3000],count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                count++;
            }
        }
        cout<<count+1<<" ";
    }
}
