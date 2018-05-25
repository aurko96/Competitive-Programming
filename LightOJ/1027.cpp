// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int cnt=0,ara[200];
        int num1,num2=0,den1,den2;
        for(int j=0;j<n;j++)
        {
            cin>>ara[j];
            if(ara[j]<0) cnt++;
            num2+=abs(ara[j]);
        }
        num1=(n-cnt);
        den1=n;
        den2=n;
        int x,y;
        x=num2*den1;
        y=num1*den2;
        int div;
        div=__gcd(x,y);
        x/=div;
        y/=div;
        if(x==0 || y==0) cout<<"Case "<<i<<": inf\n";
        else cout<<"Case "<<i<<": "<<x<<"/"<<y<<"\n";
    }
}
