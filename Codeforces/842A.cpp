// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    LL x,y,n,m,k;
    cin>>x>>y>>m>>n>>k;
    bool flag=0;
    for(int i=x;i<=y;i++)
    {
        double a;
        a=(double)i/k;
        LL b;
        b=a;
        //cout<<a<<" "<<b<<endl;
        if(a==b)
        {
            if(a>=m && a<=n)
            {
                flag=1;
                break;
            }
        }

    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}
