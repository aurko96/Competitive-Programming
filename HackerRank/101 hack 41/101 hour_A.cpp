#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100005],i,j,m,n,x,y,z,flag=0;
    cin>>n>>m;
    string s;
    cin>>s;
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        if(s[a[i]-1]=='0')
        {
            flag=1;
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
