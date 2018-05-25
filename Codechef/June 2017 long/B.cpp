#include<bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        LL x,y;
        cin>>x>>y;
        LL ans;
        if(y==0)
        {
            x++;
            ans=(x*(x+1))/2;
        }
        else
        {
            LL n,a;
            a=x+y;
            n=(a*(a+1))/2;
            n++;
            ans=n+x;
        }
        cout<<ans<<"\n";
    }
}
