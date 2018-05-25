#include<bits/stdc++.h>
#define LL long long
#define endl "\n"
using namespace std;
int main()
{
    LL i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        LL n;
        cin>>n;
        if(n==1) cout<<1<<endl;
        else if(n==2) cout<<2<<endl;
        else if(n==3) cout<<3<<endl;
        else if(n%2==0) cout<<3<<endl;
        else if(n%2!=0) cout<<4<<endl;
    }
}
