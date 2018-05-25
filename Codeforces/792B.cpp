#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>st;
    auto it=st.begin();
    int i,j,n,k,x,y,z;
    cin>>n>>k;
    int ara[105];
    for(i=0;i<k;i++) cin>>ara[i];
    for(i=1;i<=n;i++) st.insert(i);
    y=n;
    for(i=0;i<k;i++)
    {
        x=ara[i]%y;
        x=y-x;

    }
}
