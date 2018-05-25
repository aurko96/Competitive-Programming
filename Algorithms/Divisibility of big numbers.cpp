#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a;
    long long b,c,i,j,n,x,y=0,z=0,rem=0,p=0,q=0,r=0;
    cin>>a;
    x=a.size();
    cin>>b>>c;
    for(i=0;i<x;i++)
    {
        y=a[i]-48;
        rem=rem*10+y;
        rem=rem%b;
        if(rem==0)
        {
            z=i;
            p=1;
            r=z+1;
            if(r==x-1 && a[z+1]=='0')
            {
                break;
            }
            if(b/10==0 && a[i+1]=='0')
            {
                z=i+1;
                break;
            }
            if(b/10==0)
            {
                break;
            }
        }
    }
    rem=0;
    if((z+1)==x-1 && a[z+1]=='0')
    {
        cout<<"NO";
        return 0;
    }
    for(i=z+1;i<x;i++)
    {
        q=a[i]-48;
        rem=rem*10+q;
        rem=rem%c;
    }
    if(rem==0 && p==1)
    {
        cout<<"YES"<<endl;
        for(i=0;i<=z;i++)
        {
            cout<<a.at(i);
        }
        cout<<endl;
        for(i=z+1;i<x;i++)
        {
            cout<<a.at(i);
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
