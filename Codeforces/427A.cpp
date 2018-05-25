#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100002],i,n,x=0,y=0,z,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {

            x=x+a[i];
        }
        //cout<<"x="<<x<<endl;

        if(a[i]<0)
        {
            y=x+a[i];
            if(y>=0)
            {
                x=y;
            }
            if(y<0)
            {
                count++;
            }
        }
        //cout<<"y="<<y<<endl;
    }
    //cout<<x<<endl<<y<<endl;
    cout<<count;
}
