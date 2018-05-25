#include<bits/stdc++.h>
using namespace std;
int gr[10005];
set<int>st;
inline int grundy(int n)
{
    if(n==0) return 0;
    if(n==1) return 0;
    if(n==2) return 0;
    if(gr[n]!=-1) return gr[n];
    for(int i=1;i<=n;i++) st.insert(grundy(n-i));

    int ret=0;
    for(int i=0;i<=n;i++)
    {
        if(st.find(i)==st.end())
        {
            gr[n]=i;
            break;
        }
    }
    return gr[n];
}
int main()
{
    int i,j,n,x,y,z,t,ara[10005];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int mx=0;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>ara[j];
            mx=max(mx,ara[j]);
        }
        st.clear();
        memset(gr,-1,sizeof(gr));
        grundy(mx);
        int nim=0;
        for(j=0;j<n;j++)
        {
            nim^=gr[ara[j]];
            cout<<nim<<endl;
        }
        if(nim) cout<<"Case "<<i<<": Alice\n";
        else cout<<"Case "<<i<<": Bob\n";
    }
}
