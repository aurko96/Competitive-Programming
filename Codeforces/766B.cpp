#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,n,x,y,z,flag=0;
    LL ara[100005];
    cin>>n;
    for(i=0;i<n;i++) cin>>ara[i];
    sort(ara,ara+n);
    reverse(ara,ara+n);
    for(i=0;i<n-2;i++)
    {
        x=ara[i];
        y=ara[i+1]+ara[i+2];
        //cout<<x<<" "<<y<<endl;
        if(x<y)
        {
            flag=1;
            break;
        }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}
