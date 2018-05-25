#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r,x,y,x1,y1,d,m;
    cin>>r>>x>>y>>x1>>y1;
    d=sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
    m=ceil(d/(2.0*r));
    cout<<m;
}
