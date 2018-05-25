#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int vis[200];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        int s=0,m=0;
        memset(vis,0,sizeof(vis));
        bool flag=0;
        for(int j=0;j<str.size();j++)
        {
            if(str[j]=='s') s++;
            if(str[j]=='m')
            {
                if(j!=0)
                {
                    if(str[j-1]=='s' && vis[j-1]==0 && vis[j]==0)
                    {
                        s--;
                        m++;
                        vis[j-1]=1;
                        vis[j]=1;
                        flag=1;
                    }
                }
                if(j!=n-1)
                {
                    if(str[j+1]=='s' && vis[j+1]==0 && vis[j]==0)
                    {
                        s--;
                        m++;
                        vis[j+1]=1;
                        vis[j]=1;
                        flag=1;
                    }
                }
                if(flag) flag=0;
                else m++;
            }
        }
        if(s>m) cout<<"snakes\n";
        else if(m>s) cout<<"mongooses\n";
        else cout<<"tie\n";
        //cout<<s<<" "<<m<<endl;
        str.clear();
    }
}
