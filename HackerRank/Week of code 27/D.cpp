// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    LL i,j,n,m,t,x,y,z,ara[100],flag;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        x=flag=0;
        for(j=0;j<n;j++)
        {
            cin>>ara[j];
            x^=ara[j];
        }
       cout<<x<<endl;
        if(x!=0)
        {
            for(j=0;j<n;j++)
            {
                //cout<<ara[j]<<endl;
                if(ara[j]==x)
                {
                    //cout<<'p'<<endl;
                    flag=1;
                }
            }
            if((n-flag)%2==0) cout<<"W\n";
            else cout<<"L\n";
        }
        else
        {
            if(n%2!=0) cout<<"W\n";
            else cout<<"L\n";
        }
    }
}
