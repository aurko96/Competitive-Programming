#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,n,m,x,y,count=0;
    cin>>n>>x;
    for(i=1;i<=n;i++)
    {
        if(x%i==0)
        {
            if((x/i)<=n) count++;
        }
    }
    cout<<count<<endl;
}
