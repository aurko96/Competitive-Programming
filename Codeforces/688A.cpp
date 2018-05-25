#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m,n,x,y,z=0,count=0;
    cin>>n>>m;
    string a[m+2];
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        y=0;
        for(j=0;j<n;j++)
        {
            if(a[i][j]=='0')
            {
                y=1;
                count++;
                break;
            }

        }
        if(y==1)
        {
            z=max(z,count);
        }
        else
        {
            count=0;
        }
    }
    cout<<z;
}
