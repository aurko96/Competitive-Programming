#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int i,j,n,x,y,z,count=0;
    string s[1005];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<5-1;j++)
        {
            if(s[i][j]=='O' && s[i][j+1]=='O')
            {
                count=1;
                s[i][j]='+';
                s[i][j+1]='+';
                break;
            }
        }
        if(count) break;
    }
    if(count)
    {
        cout<<"YES"<<"\n";
        for(i=0;i<n;i++)
        {
            cout<<s[i]<<"\n";
        }
    }
    else
    {
        cout<<"NO"<<"\n";
    }
}
