// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    int ara[500];
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>ara[i];
    int inc=0,eqq=0,dec=0,flag=0;
    for(int i=0;i<n-1;i++)
    {
        if(ara[i]<ara[i+1])
        {
            if(eqq==0 && dec==0)
            {
                inc++;;
            }
            else flag=1;
        }
        else if(ara[i]>ara[i+1])
        {
            if(eqq>0 && inc>0) dec++;
            else if(eqq==0 && inc==0) dec++;
            else if(eqq==0 && inc>0) dec++;
            else if(eqq>0 && inc==0) dec++;
            else flag=1;
        }
        else if(ara[i]==ara[i+1])
        {
            if(inc>0 && dec==0) eqq++;
            else if(inc==0 && dec==0) eqq++;
            else flag=1;
        }
    }
    if(flag) cout<<"NO\n";
    else cout<<"YES\n";
}
