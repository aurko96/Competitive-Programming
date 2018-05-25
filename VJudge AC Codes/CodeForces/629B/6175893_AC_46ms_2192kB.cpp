#include<bits/stdc++.h>
using namespace std;
int m[500],f[500];
int main()
{
    int i,j,n,x,y,z=0;
    char ch;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ch>>x>>y;
        if(ch=='M')
        {
            for(j=x;j<=y;j++)
            {
                m[j]++;
            }
        }
        else if(ch=='F')
        {
            for(j=x;j<=y;j++)
            {
                f[j]++;
            }
        }
    }
    for(i=0;i<370;i++)
    {
        z=max(z,min(m[i],f[i]));
    }
    cout<<z*2;
}
