#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,n,x,y,z;
    cin>>n;
    LL ara[100005];
    for(i=0;i<n;i++) cin>>ara[i];
    vector<LL>diff;
    for(i=0;i<n-1;i++) diff.push_back(abs(ara[i+1]-ara[i]));
    LL mx=0,even=0,odd=0;
    for(i=0;i<n-1;i++)
    {
        x=diff[i];
        y=diff[i];
        if(i%2==0) x*=(-1);
        if(i%2==1) y*=(-1);
        even+=x;
        odd+=y;
        mx=max(mx,max(even,odd));
        if(even<0) even=0;
        if(odd<0) odd=0;
    }
    cout<<mx<<endl;
}
