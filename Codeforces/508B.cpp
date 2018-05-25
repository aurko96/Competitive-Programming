#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    char b;
    int c,d,i,n,x,y,z=0;
    cin>>a;
    x=a.size();
    for(i=1;i<=x;i++)
    {
        y=a[i-1]-48;
        c=a[x-1]-48;
        //cout<<y<<" "<<c<<" ";
        if(y%2==0)
        {
            z=i;
            if(y<c)
            {
                break;
            }
        }
    }
    //cout<<z<<endl;
    if(z!=0)
    {
        b=a[z-1];
        a[z-1]=a[x-1];
        a[x-1]=b;
        cout<<a;
    }
    else
    {
        cout<<-1;
    }
}
