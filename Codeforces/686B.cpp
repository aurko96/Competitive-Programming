#include<bits/stdc++.h>
long long a[300];
using namespace std;
int main()
{
    long long i,j,n,m,x,y=0,z=0,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        y=0;
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                y++;
                swap(a[j],a[j+1]);
                if(y==1)
                {
                    cout<<j+1<<" ";
                }
                if(j+1==n-1)
                {
                    cout<<n<<endl;
                    break;
                }
                j++;
                //cout<<a[j]<<" "<<a[j+1]<<" "<<"j="<<j<<endl;
                if(j<n-2)
                {
                    if(a[j+1]<a[j+2])
                    {
                        cout<<j+1<<endl;
                        break;
                    }
                }
                else if(j>=n-2)
                {
                    cout<<j+1<<endl;
                    break;
                }

            }
        }
    }
}
