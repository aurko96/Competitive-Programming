#include<bits/stdc++.h>

using namespace std;

#define inf 0x3f3f3f3f
#define LL long long
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define LOJ cout<<"Case "<<++cs<<": "<<ans<<endl;
#define pii pair<int,int>
//LL BigMod(LL B,LL P,LL M){LL R=1;while(P>0){if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;}return R;}
//LL InverseMod(LL B,LL M){return BigMod(B,M-2,M);}// if M is prime else Phi(M-1);
int r,c,mx;
int ara[505][505];
int fx[]= {1,-1,0,0,1,-1,1,-1};
int fy[]= {0,0,1,-1,1,-1,-1,1};
bool vis[505][505];
bool valid(int x,int y)
{
    if(x>=0 && x<r && y>=0 && y<c)return 1;
    return 0;
}
int bfs()
{
    //cout<<mx<<endl;
    int i,j,k,x,y,flag=0,cnt=0;
    queue<pii>Q,Q2;
    for(i=0; i<r; i++)for(j=0; j<c; j++)if(ara[i][j]==mx){Q2.push(make_pair(i,j));vis[i][j]=1;}


    while(!Q2.empty())
    {
        swap(Q2,Q);
        if(flag)cnt++;
        flag=1;
        while(!Q.empty())
        {
            int tx=Q.front().first;
            int ty=Q.front().second;
            Q.pop();

            //cout<<tx<<"    "<<ty<<endl;
            for(i=0; i<8; i++)
            {
                x=tx+fx[i];
                y=ty+fy[i];
                if(valid(x,y) && vis[x][y]==0)
                {
                    //cout<<"balllllllll"<<endl;
                    if(ara[x][y]!=mx) Q2.push(make_pair(x,y));
                    vis[x][y]=1;
                }

            }
        }

    }
    return cnt;
}
int main()
{
    FastRead
    int test;
    cin>>test;
    while(test--)
    {
        memset(vis,0,sizeof(0));
        int i,j,k,ans;
        mx=0;
        cin>>r>>c;
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                cin>>ara[i][j];
                mx=max(mx,ara[i][j]);
            }
        }
        ans=bfs();
        cout<<ans<<endl;
    }
}
