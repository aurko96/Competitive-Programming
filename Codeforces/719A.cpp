#include<bits/stdc++.h>
using namespace std;
int a[10005];
int main()
{
    int i,j,n,x=0,y=0,z;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        if(a[n-1]==15)
        {
            cout<<"DOWN"<<endl;
        }
        else if(a[n-1]==0)
        {
            cout<<"UP"<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        return 0;
    }
    x=a[n-1]-a[n-2];
    if(x>0 && a[n-1]==15)
    {
        cout<<"DOWN"<<endl;
    }
    else if(x>0)
    {
        cout<<"UP"<<endl;
    }
    else if(x<0 && a[n-1]==0)
    {
        cout<<"UP"<<endl;
    }
    else if(x<0)
    {
        cout<<"DOWN"<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}
