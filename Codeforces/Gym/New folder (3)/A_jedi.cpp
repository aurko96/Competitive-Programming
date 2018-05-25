#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,n,x,y,z;
    cin>>n;
    LL ara[10];
    vector<pair<LL,LL> >vect[200005];
    LL mx1,mx2,mx3;
    mx1=mx2=mx3=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>ara[i];
            sort(ara,ara+3);
            mx1=ara[2];
            mx2=mn2=ara[1];
            mn1=ara[0];
            vect[i].push_back(make_pair(mx1,mx2));
            vect[i].push_back(make_pair(mn1,mn2));
        }
    }


}
