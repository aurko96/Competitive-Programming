#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,x,y,z,t;
    string str[1005];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>x>>y;
        int flag=0;
        for(j=0;j<x;j++)
        {
            cin>>str[j];
        }
        for(j=0;j<x;j++)
        {
            for(k=0;k<y;k++)
            {
                if(str[j][k]=='W')
                {
                    //cout<<"water ";
                    if(k==0 || k==y-1) flag=1;
                    else if(str[j+1][k]=='A'||str[j][k-1]=='A'||str[j][k+1]=='A') flag=1;
                    else if(j>0 && str[j-1][k]=='B') flag=1;
                }
                else if(str[j][k]=='A')
                {
                    //cout<<"air ";
                    if(j>0 && (str[j-1][k]=='B'||str[j-1][k]=='W')) flag=1;
                }

            }
        }
        if(flag) cout<<"no\n";
        else cout<<"yes\n";
    }
}
