#include<bits/stdc++.h>
using namespace std;
int ara[2502][2502];
bool mp[2502][2502];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k,len;
        vector<int>vect[2502];
        memset(mp,0,sizeof(mp));
        cin>>n>>k;
        for(int j=0;j<n;j++)
        {
            cin>>len;
            for(int p=0;p<len;p++)
            {
                cin>>ara[j][p];
                mp[j][ara[j][p]]=1;
            }
        }
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            for(int p=1;p<=k;p++)
            {
                if(mp[j][p]==0) vect[j].push_back(p);
            }
//            for(int p=0;p<vect[j].size();p++) cout<<vect[j][p]<<" ";
//            cout<<endl;
            for(int p=j+1;p<n;p++)
            {
                bool flag=0;
                for(int q=0;q<vect[j].size();q++)
                {
                    if(mp[p][vect[j][q]]==0)
                    {
                        flag=1;
                        break;
                    }
                }
                if(!flag) cnt++;
            }
        }
        cout<<cnt<<"\n";
    }
}
