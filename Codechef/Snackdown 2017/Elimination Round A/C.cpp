#include<bits/stdc++.h>
using namespace std;
char str[5][505];
bool vis[5][505];
int n;
void snake(int j,int k)
{
    while(1)
    {
        vis[j][k]=1;
        if(j==0)
        {
            if(str[j+1][k]=='#' && vis[j+1][k]==0) j++;
            else
            {
                if((k+1)<n)
                {
                    if(str[j][k+1]=='#' && vis[j][k+1]==0) k++;
                    else break;
                }
                else break;
            }
        }
        else if(j==1)
        {
            if(str[j-1][k]=='#' && vis[j-1][k]==0) j--;
            else
            {
                if((k+1)<n)
                {
                    if(str[j][k+1]=='#' && vis[j][k+1]==0) k++;
                    else break;
                }
                else break;
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        memset(vis,0,sizeof(vis));
        bool flag=0;
        int x,y=-1,z,r=-1,s=-1;
        //for(int j=0;j<2;j++) str[j].clear();
        for(int j=0;j<2;j++)
        {
            flag=0;
            for(int k=0;k<n;k++)
            {
                cin>>str[j][k];
                if(str[j][k]=='#' && flag==0)
                {
                    if(y==-1)
                    {
                        x=j;
                        y=k;
                        flag=1;
                    }
                    else if(y!=-1)
                    {
                        if(k<y)
                        {
                            x=j;
                           y=k;
                           flag=1;
                        }
                        else if(k==y)
                        {
                            r=j;
                            s=k;
                            flag=1;
                        }
                    }
                }
            }
        }
        snake(x,y);
        bool flag2=0;
        for(int p=0;p<2;p++)
        {
            for(int q=0;q<n;q++)
            {
                if(str[p][q]=='#' && vis[p][q]==0) {flag2=1; break;}
            }
        }
        if(flag2)
        {
            if(r!=-1 && s!=-1)
            {
                memset(vis,0,sizeof(vis));
                snake(r,s);
                bool flag3=0;
                for(int p=0;p<2;p++)
                {
                    for(int q=0;q<n;q++)
                    {
                        if(str[p][q]=='#' && vis[p][q]==0) {flag3=1; break;}
                    }
                }
                if(flag3) cout<<"no\n";
                else cout<<"yes\n";


            }
            else cout<<"no\n";
        }
        else cout<<"yes\n";

    }
}
