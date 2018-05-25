#include<bits/stdc++.h>

using namespace std;

#define fRead(x)        freopen(x,"r",stdin)
#define fWrite(x)       freopen (x,"w",stdout)

#define LL              long long
#define ULL             unsigned long long
#define ff              first
#define ss              second
#define pb              push_back
#define INF             2e16
#define PI              acos(-1.0)
#define mk              make_pair
#define pii             pair<int,int>
#define pll             pair<LL,LL>


#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define min4(a,b,c,d)   min(a,min(b,min(c,d)))
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))
#define SQR(a)          ((a)*(a))
#define FOR(i,a,b)      for(int i=a;i<=b;i++)
#define ROF(i,a,b)      for(int i=a;i>=b;i--)
#define REP(i,b)        for(int i=0;i<b;i++)
#define MEM(a,x)        memset(a,x,sizeof(a))
#define ABS(x)          ((x)<0?-(x):(x))

#define SORT(v)         sort(v.begin(),v.end())
#define REV(v)          reverse(v.begin(),v.end())


#define FastRead        ios_base::sync_with_stdio(0);cin.tie(nullptr);

const int N = 100000;
LL n,L,A,B;
LL ara[N+5];

LL check(LL pos)
{
    LL cost = 0 ;
    REP(i,n)
    {
        cost += ABS(pos - ara[i]);
        pos += L;
    }
    return cost;
}
int main()
{
    FastRead
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> L >> A >> B;
        REP(i,n)cin >> ara[i];
        sort(ara,ara+n);

        LL lo = A, hi = B - n*L , mid,ans;

        while(lo + 3<=hi)
        {
            LL dif = (hi-lo)/3;
            LL p1 = lo + dif;
            LL p2 = p1 + dif;

            if(check(p1) < check(p2)){
                hi = p2;
            }else{
                lo = p1;
            }
        }
        LL mn = 1e18;
        for(int i = lo;i<=hi;i++){
            mn = min(mn,check(i));
        }
        cout << mn << "\n";
    }

}

