#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,n,x,y,z;
    cin>>n;
    LL ara[200005];
    for(i=0;i<n;i++) cin>>ara[i];
    vector<LL>vect;
    vect.push_back(ara[0]);
    for(i=1;i<n;i++)
    {
        x=ara[i]-ara[i-1];
        vect.push_back(x);
    }
    for(i=0;i<vect.size();i++) cout<<vect[i]<<" ";
}
