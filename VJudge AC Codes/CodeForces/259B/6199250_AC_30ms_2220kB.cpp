#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100],i,j,n,sum=0,x,y;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
            sum=sum+a[i][j];
        }
    }
    sum=sum/2;
    a[0][0]=sum-a[0][1]-a[0][2];
    a[1][1]=sum-a[1][0]-a[1][2];
    a[2][2]=sum-a[2][0]-a[2][1];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
