#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m,n,x,y,a[200],count;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>m;
        count=0;
        for(j=0;j<m;j++)
        {
            cin>>a[j];

        }
        y=(a[0]-3)/5;
        if(a[0]>2 && a[0]<=7)
        {
            count=1;
        }
        else if(a[0]>2 && y>0)
        {
            count+=y+1;
        }
        for(j=0;j<m-1;j++)
        {
            x=a[j+1]-a[j];
            //cout<<x<<endl;
            y=(x-1)/5;
            if(x>0 && x<=5)
            {
                count++;
            }
            else if(x>5)
            {
                count+=y+1;
            }
        }
        cout<<"Case "<<i<<": "<<count<<endl;
    }
}
