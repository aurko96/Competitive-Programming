#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[100005],i,n,x=0,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]>a[i])
        {
            count++;
            cout<<count<<endl;
            if(count>x)
            {
                x=count;
                cout<<"x="<<x<<endl;
            }
        }
        else if(a[i+1]<=a[i])
        {
            count=0;
        }
    }
    cout<<x+1<<'\n';
}
