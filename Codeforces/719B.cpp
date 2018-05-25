#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    string s;
    int i,n,x,y,z,cnt1=0,cnt2=0;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        if(i%2==0 && s[i]!='r') cnt1++;
        else if(i%2==1 && s[i]!='b') cnt2++;
    }
    x=max(cnt1,cnt2);
    cnt1=cnt2=0;
    for(i=0;i<n;i++)
    {
        if(i%2==0 && s[i]!='b') cnt1++;
        else if(i%2==1 && s[i]!='r') cnt2++;
    }
    y=max(cnt1,cnt2);
    z=min(x,y);
    cout<<z<<endl;
}
