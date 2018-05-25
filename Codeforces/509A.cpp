#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x,y,z;
    cin>>n;
    int a[100][100];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0 || j==0) a[i][j]=1;
            else
            {
                a[i][j]=a[i-1][j]+a[i][j-1];
            }
        }
    }
    cout<<a[n-1][n-1];
}
