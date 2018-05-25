#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1002][5],i,j,k,t,p,n,x,y,z;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            for(k=0;k<3;k++)
            {
                cin>>a[j][k];
            }
        }
        for(j=1,p=0;j<n;p++)
        {
            if(p==3)
            {
                p=0;
                j++;
            }
            x=100000;
            for(k=0;k<3;k++)
            {
                if(k==p) continue;
                if(a[j-1][k]<x)
                {
                    x=a[j-1][k];

                }
            }
            a[j][p]+=x;
        }
        cout<<"Case "<<i+1<<": "<<min(a[n-1][0],min(a[n-1][1],a[n-1][2]))<<"\n";
    }
}
