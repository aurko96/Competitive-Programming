#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,x[100000],y[100000];
    cin>>m>>n;
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];

    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(x[j]>x[j+1])
            {
                swap(x[j],x[j+1]);
                swap(y[j],y[j+1]);
            }
            if(x[j]==x[j+1])
            {
                if(y[j]<y[j+1])
                {
                    swap(x[j],x[j+1]);
                    swap(y[j],y[j+1]);
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(x[i]>=m)
        {
            cout<<"NO";
            return 0;
        }
        else if(x[i]<m)
        {
            m=m+y[i];
        }
    }
    cout<<"YES";
}
