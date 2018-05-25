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
            //cout<<"m="<<m[j]<<endl<<"j="<<j<<endl;
        }
        else if(ch=='F')
        {
            for(j=x;j<=y;j++)
            {
                f[j]++;

            }
            //cout<<"f="<<f[j]<<endl<<"j="<<j<<endl;
        }
    }
    for(i=0;i<370;i++)
    {
        //cout<<"min"<<min(m[i],f[i])<<endl;
        z=max(z,min(m[i],f[i]));
        //cout<<"z="<<z<<endl;
    }
    cout<<z*2;
}
