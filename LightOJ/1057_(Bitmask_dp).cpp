#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
deque<pair<int,int> >dq;
int dp[1<<16][25];            //  ~ Bitmask DP

int Set(int N,int pos){return N = N | (1<<pos);}
int Reset(int N,int pos){return N = N & ~(1<<pos);}
bool Check(int N,int pos){return (bool)(N & (1<<pos));}

int dist(int x,int y)  // Distance between two co-ordinates
{
    int xx,yy;
    xx=abs(dq[x].ff-dq[y].ff);
    yy=abs(dq[x].ss-dq[y].ss);
    return max(xx,yy);
}
int call(int mask,int pos)
{
    if(mask==(1<<dq.size())-1) return dp[mask][pos]=dist(pos,0); // distance for returning to its initial position after collecting all golds
    if(dp[mask][pos]!=-1) return dp[mask][pos];
    int ret=1e9;
    for(int i=0;i<dq.size();i++)
    {
        if(Check(mask,i)==0) // Checking for unvisited gold positions
        {
            ret=min(ret,dist(pos,i)+call(Set(mask,i),i));
            // adding distance from one gold's position to another
            // and setting the mask for the current visited gold's position
        }
    }
    return dp[mask][pos]=ret;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        dq.clear();
        memset(dp,-1,sizeof(dp));
        int n,m;
        cin>>n>>m;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
            {
                char ch;
                cin>>ch;
                if(ch=='x') dq.push_front(make_pair(j,k)); // My initial position 'x' stays at index 0 of deque
                else if(ch=='g') dq.push_back(make_pair(j,k));
            }
        }
        int ans;
        ans=call(1,0);  // As our initial position 'x' is visited from the beginning so we pass 1 as the parameter for mask
        cout<<"Case "<<i<<": "<<ans<<"\n";
    }
}
