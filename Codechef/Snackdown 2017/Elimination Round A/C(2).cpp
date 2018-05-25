#include<bits/stdc++.h>
using namespace std;
string str[5];
bool vis[5][505];
int n;
bool snake_right(int j,int k)
{
    while(1)
    {
        cout<<"1st  = "<<j<<" "<<k<<endl;
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
    for(int p=0;p<2;p++)
    {
        for(int q=0;q<n;q++)
        {
            if(str[p][q]=='#' && vis[p][q]==0) return 1;
        }
    }
    return 0;
}

bool snake_left(int j,int k)
{
    while(1)
    {
        cout<<"2nd  = "<<j<<" "<<k<<endl;
        vis[j][k]=1;
        if(j==0)
        {
            if(str[j+1][k]=='#' && vis[j+1][k]==0) j++;
            else
            {
                if((k-1)>=0)
                {
                    if(str[j][k-1]=='#' && vis[j][k-1]==0) k--;
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
                if((k-1)>=0)
                {
                    if(str[j][k-1]=='#' && vis[j][k-1]==0) k--;
                    else break;
                }
                else break;
            }
        }
    }
    for(int p=0;p<2;p++)
    {
        for(int q=0;q<n;q++) cout<<vis[p][q]<<" ";
        cout<<endl;
    }
    for(int p=0;p<2;p++)
    {
        for(int q=0;q<n;q++)
        {
            if(str[p][q]=='#' && vis[p][q]==0) return 1;
        }
    }
    return 0;
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
        int x=-1,y=-1,z,r=-1,s=-1;
        for(int j=0;j<2;j++) str[j].clear();
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<n;k++)
            {
                cin>>str[j][k];
            }
        }
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(str[j][k]=='#')
                {
                    if(j==0)
                    {
                        x=j;
                        y=k;
                        break;
                    }
                    else if(j==1)
                    {
                        r=j;
                        s=k;
                        break;
                    }
                }
            }
        }
        int a=-1,b=-1,c=-1,d=-1;
        for(int p=0;p<2;p++)
        {
            for(int q=n-1;q>=0;q--)
            {
                if(str[p][q]=='#')
                {
                    if(p==0)
                    {
                        a=p;
                        b=q;
                        break;
                    }
                    else if(p==1)
                    {
                        c=p;
                        d=q;
                        break;
                    }

                }
            }
        }
        cout<<"hello\n";
        cout<<x<<" "<<y<<" "<<r<<" "<<s<<" "<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        bool flag2=1,flag3=1;
        if(x!=-1 && y!=-1)flag2=snake_right(x,y);
        memset(vis,0,sizeof(vis));
        if(r!=-1 && s!=-1)flag3=snake_right(r,s);
       // cout<<"hello "<<endl;
        bool flag4=1,flag5=1;
        memset(vis,0,sizeof(vis));
        if(a!=-1 && b!=-1)flag4=snake_left(a,b);
        memset(vis,0,sizeof(vis));
        if(c!=-1 && d!=-1)flag5=snake_left(c,d);
        cout<<"hello2\n";
        cout<<flag2<<" "<<flag3<<" "<<flag4<<" "<<flag5<<endl;
        if(flag2==0 || flag3==0 || flag4==0 || flag5==0) cout<<"yes\n";
        else cout<<"no\n";

    }

}

