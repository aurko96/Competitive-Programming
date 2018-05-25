#include<bits/stdc++.h>

using namespace std;

#define LCM(a,b)                (a / __gcd(a,b) ) *b
#define GCD(a,b)                __gcd(a,b)
#define dist(x1,y1,x2,y2)       sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define distl(x1,y1,x2,y2)      sqrtl((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define fRead(x)                freopen(x,"r",stdin)
#define fWrite(x)               freopen (x,"w",stdout)
#define LL                      long long
#define ULL                     unsigned long long
#define pb                      push_back
#define tcase                   cout<<"Case "<<C++<<": ";
#define all(a)                  a.begin(),a.end()
#define Unique(a)               sort(all(a)),a.erase(unique(all(a)),a.end
#define ABS(x)                  ((x)<0?-(x):(x))
#define min3(a,b,c)             min(a,min(b,c))
#define min4(a,b,c,d)           min(a,min(b,min(c,d)))
#define max3(a,b,c)             max(a,max(b,c))
#define max4(a,b,c,d)           max(a,max(b,max(c,d)))
#define PI                      acos(-1.0)
#define ff                      first
#define ss                      second
#define SP(x,y)                 fixed<<setprecision((y))<<(x)
#define FastRead                ios_base::sync_with_stdio(0);cin.tie(NULL);
#define rep(x, l, r)            for (LL x = l; x<=r; ++x)
#define repp(x,r)               for (LL x = 0; x <r; ++x)
#define per(x, l, r)            for (LL x = l; x >= r; --x)
#define perr(x, l)              for (LL x = l-1; x >= 0; --x)
#define NN                      cout<<"\n";
#define NNN                     cout<<"\n------------------------------\n";

//***********************************************************************//
//                      SHAHED AHMED, CSE'15, IUT                        //
//***********************************************************************//

vector<LL> ad[200];
vector<LL> ans;
LL a[200];
LL vis[200];
LL anssum;
LL ansnode;
void dfs(LL node,LL sum)
{

        if(ad[node].size()==0) {ansnode = node;anssum = sum;}

        LL mx=-1;
        LL mxid=-1;

        for(LL i=0;i<ad[node].size();i++)
        {
                if(a[ad[node][i]]>mx) {
                        mx = a[ad[node][i]];
                        mxid = ad[node][i];
                }
        }

        if(mxid!=-1)
        {
                dfs(mxid,sum+a[mxid]);
        }

}

int main()
{
        LL T,C=1;
        cin>>T;
        while(T--)
        {

        LL n,m;
        cin>>n>>m;

        LL x,y;


        for(LL i=0;i<n;i++)
        {
                ad[i].clear();
                cin>>a[i];
        }



        for(LL i=0;i<m;i++)
        {
                cin>>x>>y;
                ad[x].pb(y);
        }

        dfs(0,0);


        tcase cout<<anssum<<" "<<ansnode<<"\n";
        }

}
