#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
unordered_map<int,unordered_map<int,int> >mp;
int n,q;
struct matrix
{
    int x,y,val;
}mat[1000002];
int pr[100005];
int find(int r){
   return (pr[r]==r) ? r : pr[r]=find(pr[r]);
}
int main()
{
    FastRead
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>q;
       // for(int j=0;j<=n;j++) mp[j].clear();
        bool flag=0;
        for(int j=0;j<q;j++)
        {
            int x,y,val;
            cin>>mat[j].x>>mat[j].y>>mat[j].val;
            if(mat[j].x==mat[j].y)
            {
                if(mat[j].val!=0) flag=1;
            }
            if(mp[mat[j].y][mat[j].x]!=0)
            {
                if(mp[mat[j].y][mat[j].x]!=mat[j].val+1) flag=1;
            }
            if(flag) continue;
            mp[mat[j].x][mat[j].y]=mat[j].val+1;
            mp[mat[j].y][mat[j].x]=mat[j].val+1;
        }
        if(flag)
        {
            //cout<<"boo  \n";
            cout<<"no\n";
            for(int j=0;j<q;j++)
            {
                mp[mat[j].x][mat[j].y]=0;
                mp[mat[j].y][mat[j].x]=0;
            }
            continue;
        }
        int u,v;
        for(int j=0;j<=n;j++) pr[j]=j;
        for(int j=0;j<q;j++)
        {
            if(mat[j].val==0)
            {
                u=find(mat[j].x);
                v=find(mat[j].y);
                if(u!=v)
                {
                    pr[u]=v;
                }
            }
        }
        int colour[100005];
        memset(colour,0,sizeof(colour));
        for(int j=0;j<q;j++)
        {
            //cout<<"helooo "<<endl;
            if(mat[j].val==1)
            {
                u=find(mat[j].x);
                v=find(mat[j].y);
                if(u==v)
                {
                    flag=1;
                    break;
                }
                else
                {
                    if(colour[u]==0 && colour[v]==0)
                    {
                        colour[u]=1;
                        colour[v]=2;
                    }
                    else if(colour[u]==0)
                    {
                        if(colour[v]==1) colour[u]=2;
                        else if(colour[v]==2) colour[u]=1;
                    }
                    else if(colour[v]==0)
                    {
                        if(colour[u]==1) colour[v]=2;
                        else if(colour[u]==2) colour[v]=1;
                    }
                    else
                    {
                        if(colour[u]==colour[v])
                        {
                            //cout<<"hereee  \n";
                            flag=1;
                        }
                    }
                }
            }

        }
        if(flag) cout<<"no\n";
        else cout<<"yes\n";
        for(int j=0;j<q;j++)
        {
            mp[mat[j].x][mat[j].y]=0;
            mp[mat[j].y][mat[j].x]=0;
        }

    }
}

