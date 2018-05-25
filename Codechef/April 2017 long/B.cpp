#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>st;
    int i,j,k,n,x,y,z,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        st.clear();
        int p,q,mx=0,flag=0;
        cin>>n>>x;
        for(j=0;j<n;j++)
        {
            cin>>y;
            for(k=0;k<y;k++)
            {
                cin>>z;
                st.insert(z);
            }
            p=st.size();
            if(p>mx) mx=p;
            else if(p==mx) flag=1;
        }
        if(p==x)
        {
            if(flag) cout<<"some\n";
            else cout<<"all\n";
        }
        else cout<<"sad\n";
    }
}
