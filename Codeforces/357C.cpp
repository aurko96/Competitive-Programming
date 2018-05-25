#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>st;
    int i,j,n,m,x,y,z,ara[300005];
    cin>>n>>m;
    for(i=1;i<=n;i++) st.insert(i);
    for(i=0;i<m;i++)
    {
        cin>>x>>y>>z;
        auto it=st.lower_bound(x);
        auto it2=st.upper_bound(y);
        auto start=it;
        while(it!=it2)
        {
            int p=*it;
            //cout<<p<<endl;
            if(p==z) ara[p]=0;
            else ara[p]=z;
            //cout<<"hello "<<ara[p]<<endl;
            it++;
        }
        st.erase(start,it2);
        st.insert(z);
    }
    for(i=1;i<=n;i++) cout<<ara[i]<<" ";
}
