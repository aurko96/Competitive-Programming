#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b[1000],c[1000];
    int i,j,k,n,x,y,z;
    cin>>a;
    n=a.size();
    for(i=0;i<10;i++)
    {
        cin>>b[i];
    }
    cout<<n<<endl;
    cout<<a[1]<<endl;
    for(i=1,j=0,k=0;i<=n;i++,j++)
    {
        c[k][j]=a[i-1];

        if(i%10==0)
        {
            j=0;
            k++;
        }
        cout<<c[j][k];

    }
    cout<<k<<endl<<endl;
    for(i=0;i<10;i++)
    {
        cout<<b[i];
        cout<<endl;
    }
    for(i=0;i<8;i++)
    {
        cout<<c[i];
        cout<<endl;
    }
    for(i=0,j=0;i<n;j++)
    {
        if(c[i]==b[j])
        {
            cout<<i;
            i++;
        }
        if(j==9)
        {
            j=0;
        }
    }
}
