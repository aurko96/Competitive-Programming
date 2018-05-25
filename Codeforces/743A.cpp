#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,n,x,y,z;
    cin>>n>>x>>y;
    string str;
    cin>>str;
    if(str[x-1]==str[y-1])
    {
        cout<<0;
    }
    else cout<<1;

    /*for(i=x-1;i<str.size()-1;i++)
    {
        if(str[i+1]!=str[x-1])
        {
            z=(i+1)-(x-1);
            //cout<<z<<endl;
            break;
        }
    }
    LL p;
    for(i=x-1;i>0;i--)
    {
        if(str[i-1]!=str[x-1])
        {
            p=(x-1)-(i-1);
            //cout<<p<<endl;
            break;
        }
    }
    LL mn=10000000;
    mn=min(mn,min(z,p));
    cout<<mn<<"\n";*/
}
