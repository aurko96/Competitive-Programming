#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5],b[10],i,j,n,x,y,z;
    memset(b,0,sizeof(b));
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
            b[i]=b[i]+a[i][j];
        }
    }
    cin>>n;
    x=(b[0]/5);
    if(b[0]%5!=0) x++;
    y=(b[1]/10);
    if(b[1]%10!=0) y++;
    z=x+y;
    if(z<=n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
