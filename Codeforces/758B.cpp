// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    LL i,j,n,x,z,k,p,r,b,g,y;
    string str;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='G')
        {
            g=(i%4);
        }
        if(str[i]=='R')
        {
            r=(i%4);
        }
        if(str[i]=='B')
        {
            b=(i%4);
        }
        if(str[i]=='Y')
        {
            y=(i%4);
        }
    }
    x=z=k=p=0;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='!')
        {
            if(i%4==r)
            {
                x++;
            }
            if(i%4==b)
            {
                z++;
            }
            if(i%4==y)
            {
                k++;
            }
            if(i%4==g)
            {
                p++;
            }
        }
    }
    cout<<x<<" "<<z<<" "<<k<<" "<<p<<"\n";
}
