#include<bits/stdc++.h>
long long a[300];
using namespace std;
int main()
{
    long long i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                cout<<j+1<<" "<<j+2<<endl;
                swap(a[j],a[j+1]);
            }

        }

    }
}

