#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,x,y,z;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            for(j=1;j<=m;j++)
            {
                cout<<'#';
            }
        }
        else if(i%4==2)
        {
            for(j=1;j<m;j++)
            {
                cout<<'.';
            }
            cout<<'#';
        }
        else if(i%4==0)
        {
            cout<<'#';
            for(j=1;j<m;j++)
            {
                cout<<'.';
            }
        }
        cout<<endl;
    }
}
