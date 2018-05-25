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
#define rep(x, l, r)            for (int x = l; x<=r; ++x)
#define repp(x,r)               for (int x = 0; x <r; ++x)
#define per(x, l, r)            for (int x = l; x >= r; --x)
#define perr(x, l)              for (int x = l-1; x >= 0; --x)
#define NN                      cout<<"\n";
#define NNN                     cout<<"\n------------------------------\n";

//***********************************************************************//
//                      SHAHED AHMED, CSE'15, IUT                        //
//***********************************************************************//

template <typename T> inline T BigMod(T A,T B,T M ){T ret = 1;while(B){if(B & 1) ret = (ret * A) % M;A = (A * A) % M;B = B >> 1;}return ret;}

int main()
{
        int T,C=1;
        cin>>T;
        while(T--)
        {
        LL a[1010];

        LL n,k,md;

        cin>>n>>k>>md;

        for(int i=0;i<n;i++)
        {
                cin>>a[i];
        }

        LL rep = BigMod(n,k-1,md);
         //cout<<n<<" "<<k-1<<" "<<md<<" "<<rep<<"--\n";
        rep*=k;
        rep%=md;

        LL ans=0;

        for(int i=0;i<n;i++)
        {
                ans += a[i]*rep;
                ans%=md;
        }

        tcase cout<<ans<<"\n";

        }

}
