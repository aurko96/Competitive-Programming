#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n,m,x1,x2,y1,y2,x,y,a,b;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>x1>>y1>>x2>>y2;
        cin>>n;
        cout<<"Case "<<i<<":"<<endl;
        for(j=1;j<=n;j++)
        {
            cin>>x>>y;
            if((x>=x1 && x<=x2) && (y>=y1 && y<=y2))
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }

}
