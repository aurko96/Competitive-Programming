#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[100005],b,c,i,n,x=0,y=0,z=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[0]>25)
        {
            cout<<"NO";
            return 0;
        }
        if(a[i]==25)
        {
           x++;
            //cout<<"x1="<<x<<endl;
        }
        else if(a[i]==50)
        {
            x--;
            y++;
            //cout<<"y="<<y<<endl<<"x2="<<x<<endl;
        }
        else if(a[i]==100)
        {
            z++;
            if(y>0)
            {
                x--;
                y--;
            }
            else
            {
                x-=3;
            }
            //cout<<"x3="<<x<<endl;
        }
        if(x<0 || y<0)
        {
            break;
        }
    }
    if(x>=0 && y>=0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
