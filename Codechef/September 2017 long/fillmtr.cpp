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
bool valid(int x,int y)
{
    if(x<=0 || y<=0 || x>n || y>n) return 0;
    if(x==y) return 0;
    return 1;
}
bool up(int x,int y)
{
    if(valid(x-1,y) && valid(x-1,y-1))
    {
        if(mp[x][y]==1+1)
        {
            if(mp[x-1][y]==1+1)
            {
                if(mp[x-1][y-1]==0+1) return 0;
                else if(mp[x-1][y-1]==1+1) return 1;
            }
            else if(mp[x-1][y]==0+1)
            {
                if(mp[x-1][y-1]==1+1) return 0;
                else if(mp[x-1][y-1]==0+1) return 1;
            }
        }
        else
        {
            if(mp[x-1][y]==1+1)
            {
                if(mp[x-1][y-1]==1+1) return 0;
                else if(mp[x-1][y-1]==0+1) return 1;
            }
            else if(mp[x-1][y]==0+1)
            {
                if(mp[x-1][y-1]==0+1) return 0;
                else if(mp[x-1][y-1]==1+1) return 1;
            }
        }
    }
    return 0;
}
bool down(int x,int y)
{
    if(valid(x+1,y) && valid(x,y-1))
    {
        if(mp[x][y]==1+1)
        {
            if(mp[x+1][y]==1+1)
            {
                if(mp[x][y-1]==0+1) return 0;
                else if(mp[x][y-1]==1+1) return 1;
            }
            else if(mp[x+1][y]==0+1)
            {
                if(mp[x][y-1]==1+1) return 0;
                else if(mp[x][y-1]==0+1) return 1;
            }
        }
        else
        {
            if(mp[x+1][y]==1+1)
            {
                if(mp[x][y-1]==1+1) return 0;
                else if(mp[x][y-1]==0+1) return 1;
            }
            else if(mp[x+1][y]==0+1)
            {
                if(mp[x][y-1]==0+1) return 0;
                else if(mp[x][y-1]==1+1) return 1;
            }
        }
    }
    return 0;
}
bool right(int x,int y)
{
    if(valid(x,y+1) && valid(x+1,y+1))
    {
        if(mp[x][y]==1+1)
        {
            if(mp[x][y+1]==1+1)
            {
                if(mp[x+1][y+1]==0+1) return 0;
                else if(mp[x+1][y+1]==1+1) return 1;
            }
            else if(mp[x][y+1]==0+1)
            {
                if(mp[x+1][y+1]==1+1) return 0;
                else if(mp[x+1][y+1]==0+1) return 1;
            }
        }
        else
        {
            if(mp[x][y+1]==1+1)
            {
                if(mp[x+1][y+1]==1+1) return 0;
                else if(mp[x+1][y+1]==0+1) return 1;
            }
            else if(mp[x][y+1]==0+1)
            {
                if(mp[x+1][y+1]==0+1) return 0;
                else if(mp[x+1][y+1]==1+1) return 1;
            }
        }
    }
    return 0;
}
bool left(int x,int y)
{
    if(valid(x,y-1) && valid(x+1,y))
    {
        if(mp[x][y]==1+1)
        {
            if(mp[x][y-1]==1+1)
            {
                if(mp[x+1][y]==0+1) return 0;
                else if(mp[x+1][y]==1+1) return 1;
            }
            else if(mp[x][y-1]==0+1)
            {
                if(mp[x+1][y]==1+1) return 0;
                else if(mp[x+1][y]==0+1) return 1;
            }
        }
        else
        {
            if(mp[x][y-1]==1+1)
            {
                if(mp[x+1][y]==1+1) return 0;
                else if(mp[x+1][y]==0+1) return 1;
            }
            else if(mp[x][y-1]==0+1)
            {
                if(mp[x+1][y]==0+1) return 0;
                else if(mp[x+1][y]==1+1) return 1;
            }
        }
    }
    return 0;
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
                if(mp[mat[j].y][mat[j].x]!=mat[j].val) flag=1;
            }
            if(flag) continue;
            mp[mat[j].x][mat[j].y]=mat[j].val+1;
            mp[mat[j].y][mat[j].x]=mat[j].val+1;
        }
        if(flag)
        {
            cout<<"no\n";
            for(int j=0;j<q;j++)
            {
                mp[mat[j].x][mat[j].y]=0;
                mp[mat[j].y][mat[j].x]=0;
            }
            continue;
        }
        for(int j=0;j<q;j++)
        {
            //cout<<"heloooo\n\n";
            if(mat[j].x==mat[j].y) continue;
            if(mat[j].x>mat[j].y) swap(mat[j].x,mat[j].y);
            flag=up(mat[j].x,mat[j].y);
            if(flag) break;
            flag=down(mat[j].x,mat[j].y);
            if(flag) break;
            flag=left(mat[j].x,mat[j].y);
            if(flag) break;
            flag=right(mat[j].x,mat[j].y);
            if(flag) break;
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
