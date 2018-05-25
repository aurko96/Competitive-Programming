// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int n,m;
int l,r,d,u;
int ara[10];
int ans;
bool vis[1005][1005];
string str[1005];
//int flg;
//int fx[]={}
int dfs(int row,int col,char pre,char now,int flg)
{
    //cout<<row<<" "<<col<<" "<<pre<<" "<<now<<endl;
    if(ans) return flg;
    if(row<0 || col<0 || row>=n || col>=m) return flg;
    if(str[row][col]=='T') { ans=1;return flg; }
    if(str[row][col]=='*')  return flg;
    if(vis[row][col]==1) return flg;
    else vis[row][col]=1;
    //if(str[row][col]=='.')
    //{
        if(now=='L')
        {
            if(pre=='D') ara[1]++;
            else ara[0]++;
        }
        else if(now=='R')
        {
            if(pre=='D') ara[0]++;
            else ara[1]++;
        }
        else if(now=='U')
        {
            if(pre=='L') ara[1]++;
            if(pre=='R') ara[0]++;
            else ara[2]++;
        }
        else if(now=='D')
        {
            if(pre=='R') ara[1]++;
            else if(pre=='L') ara[0]++;
            else ara[3]++;
        }
        if(now!=pre)
        {
           dfs(row+1,col,now,'D',flg+1);
        dfs(row-1,col,now,'U',flg+1);
        dfs(row,col+1,now,'R',flg+1);
        dfs(row,col-1,now,'L',flg+1);
        }
        else
        {
            dfs(row+1,col,now,'D',flg);
        dfs(row-1,col,now,'U',flg);
        dfs(row,col+1,now,'R',flg);
        dfs(row,col-1,now,'L',flg);
        }

    //}

}
int main()
{
    int i,j,x,y,z;
    cin>>n>>m;
    //int ara[10];
    memset(ara,0,sizeof(ara));
    //string str[1005];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           cin>>str[i][j];
           if(str[i][j]=='S')
           {
               x=i;
               y=j;
                break;
           }
        }
    }
    //cout<<x<<" "<<y<<endl;
    z=dfs(x,y,'1','R',0);
   // cout<<"z           "<<z<<endl;
    int cnt=0;
    //cout<<ans<<endl<<endl;
    if(ans)
    {
//        for(i=0;i<4;i++)
//        {
//            if(ara[i]==0) cnt++;
//            cout<<"bb    "<<ara[i]<<" ";
//        }
//        cout<<endl;
        if(z<=2) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else cout<<"NO\n";
   // for(i=0;i<4;i++) cout<<"bb   "<<ara[i]<<" ";
   // cout<<"flg "<<flg<<endl;
}
