#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int n,m,ara[102][102];
int dp[102][102][102][3];

int call(int pos,int path1,int path2,int nextMove)
{
    // path1 is at the left side of path2 and they do not intersect
    // base case = when path2 is at the bottom right corner and path1 is at the left side of it
    if(pos==n-1 && path1==m-2 && path2==m-1 && nextMove==0) return 0;
    if(dp[pos][path1][path2][nextMove]!=-1) return dp[pos][path1][path2][nextMove];
    int ret=0;
    if(nextMove==0)
    {
          if(path1+1<path2) ret=max(ret,ara[pos][path1+1]+call(pos,path1+1,path2,0)); // moving path1 across columns
          ret=max(ret,call(pos,path1,path2,1));  // finished moving path1 across column in current state
    }
    else if(nextMove==1)
    {
          if(path2+1<m) ret=max(ret,ara[pos][path2+1]+call(pos,path1,path2+1,1)); // moving path2 across columns
          if(path2>path1) ret=max(ret,call(pos,path1,path2,2)); // finished moving path2 at current state
    }
    else if(nextMove==2)
    {
          if(path1<path2 && pos+1<n)
          {
              ret=max(ret,ara[pos+1][path1]+ara[pos+1][path2]+call(pos+1,path1,path2,0));
              // moving across rows downwards for both the path from current state
              // as both paths are in two different columns so they do not intersect
          }
    }
    return dp[pos][path1][path2][nextMove]=ret; // returning best possible value

}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        memset(dp,-1,sizeof(dp));
        cin>>n>>m;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++) cin>>ara[j][k];
        }
        int ans;
        ans=call(0,0,0,1)+ara[0][0];  // taking the starting point at the beginning
        cout<<"Case "<<i<<": "<<ans<<"\n";

    }
}
