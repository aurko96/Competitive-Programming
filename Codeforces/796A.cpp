// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    int i,j,n,x,y,z;
    int ara[10005];
    cin>>n>>x>>y;
    int p=1e9,q=1e9,r;
    for(i=1;i<=n;i++) cin>>ara[i];
    for(i=x+1;i<=n;i++)
    {
        if(ara[i]<=y && ara[i]!=0)
        {
            p=i-x;
            p=abs(p);
            //cout<<p;
            break;
        }
    }
    for(i=x-1;i>0;i--)
    {
        if(ara[i]<=y && ara[i]!=0)
        {
            q=x-i;
            q=abs(q);
           // cout<<q;
            break;
        }
    }
    int mn;
    mn=min(p,q);
    cout<<mn*10<<"\n";
}
