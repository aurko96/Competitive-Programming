#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,x,y,a,b,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>x>>y;
        long long count=0;
        if(x==y)
        {
            if(x%3==0 || (x+1)%3==0)
            {
                cout<<"Case "<<i<<": "<<1<<endl;
            }
            else
            {
                cout<<"Case "<<i<<": "<<0<<endl;
            }
        }
        else
        {
            if(y%3==0 || (y-1)%3==0)
            {
                b=y/3;
                count+=(b*2);
            }
            else if((y+1)%3==0)
            {
                b=y/3;
                count+=(b*2)+1;
            }
            if((x-1)%3==0 || (x-2)%3==0)
            {
                a=(x-1)/3;
                count-=(a*2);
            }
            else if(x%3==0)
            {
                a=(x-1)/3;
                count-=(a*2)+1;
            }
            cout<<"Case "<<i<<": "<<count<<endl;
        }
    }
}
