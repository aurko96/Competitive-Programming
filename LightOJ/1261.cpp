#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int n,m,p;
        cin>>n>>m>>p;
        map<int,int>mp;
        int ppl[100][100];
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<p;k++) cin>>ppl[j][k];
        }

//        for(int j=0;j<n;j++)
//        {
//            for(int k=0;k<p;k++) cout<<ppl[j][k]<<" ";
//            cout<<endl;
//        }
        int x;
        cin>>x;
        for(int j=0;j<x;j++)
        {
            int y;
            cin>>y;
            mp[y]=1;
        }
        bool flag=0,flag2=0;
        for(int j=0;j<n;j++)
        {
            flag=0;
            for(int k=0;k<p;k++)
            {
                if(flag) break;
                if(ppl[j][k]>0)
                {
                    if(mp[abs(ppl[j][k])]==1)
                    {
                        flag=1;
                       // cout<<"hello 1 = "<<mp[ppl[j][k]]<<" "<<ppl[j][k]<<endl;
                    }
                }
                else if(ppl[j][k]<0)
                {
                    if(mp[abs(ppl[j][k])]==0)
                    {
                        flag=1;
                       // cout<<"hello 2 = "<<mp[ppl[j][k]]<<" "<<ppl[j][k]<<endl;
                    }
                }
            }
            if(!flag)
            {
               // cout<<"per "<<j<<endl;
                flag2=1;
                break;
            }
        }
        if(!flag2) cout<<"Case "<<i<<": Yes\n";
        else cout<<"Case "<<i<<": No\n";
    }
}
