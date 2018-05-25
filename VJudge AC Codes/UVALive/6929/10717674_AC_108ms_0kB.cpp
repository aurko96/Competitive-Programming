
#include<bits/stdc++.h>

using namespace std;


#define FastRead        ios_base::sync_with_stdio(0);cin.tie(NULL);
#define fRead           freopen("input.txt","r",stdin);
#define fWrite          freopen("output.txt","w",stdout);

#define LL              long long
#define MEM(a,value)    memset(a,value,sizeof(a))
#define NL              "\n"
#define SP              " "
#define debug           cout<<"---VALHALLA---"<<"\n";
#define INF             100000000
#define PI              acos(-1.0)
#define MAX             100005
#define ABS(x)          ((x)<0?-(x):(x))

const LL MOD = 1e9 + 7;
/*
#define Sieve
#define Combinatorics

template <typename T> inline T GCD (T a,T b ) {a = abs(a);b = abs(b); if(a < b) swap(a, b); while ( b ) { a = a % b; swap ( a, b ); } return a;}
template <typename T> inline T LCM(T x,T y){T tp = GCD(x,y);if( (x / tp) * 1. * y > 9e18) return 9e18;return (x / tp) * y;}
template <typename T> inline T BigMod(T A,T B,T M = MOD){T ret = 1;while(B){if(B & 1) ret = (ret * A) % M;A = (A * A) % M;B = B >> 1;}return ret;}
template <typename T> inline T InvMod (T A,T M = MOD){return BigMod(A,M-2,M);}

#ifdef Sieve
const LL maxPrime = 2000006;
bool isPrime[maxPrime + 10]; vector<LL> prime; LL prime_size;
void sieve(){isPrime[0] = isPrime[1] = 1;prime.push_back(2);for(LL i = 4; i <= maxPrime; i+=2) isPrime[i] = 1;
for(LL i = 3; i <= maxPrime; i+=2){if(!isPrime[i]){prime.push_back(i);for(LL j = i * i; j <= maxPrime; j += (i << 1)) isPrime[j] = 1;}}prime_size = prime.size();}
#endif

#ifdef Combinatorics
const LL maxFact = 2000006;
LL Fact[maxFact + 1], tMod = MOD;
void Factorial(){ Fact[0] = 1; for(LL i = 1; i <= maxFact; i++) Fact[i] = (Fact[i - 1] * i) % tMod; }
inline LL nCr(LL n, LL r) { return (Fact[n] * InvMod((Fact[n - r] * Fact[r]) % tMod, tMod)) % tMod; }
#endif
*/
LL sum[50000];

int main()
{
    //FastRead
    //fWrite

    LL t;
    cin>>t;
    for(LL cs = 1;cs<=t;cs++){
    LL y;
    cin>>y;
    LL n = (-1+sqrt(1+8*y))/2;
    n++;
// cout<<n<<SP;
    LL x;
    LL st = 0;
    for(LL i=2; i<=n; i++)
    {
        LL a = 2*y-i*i+i;
        LL b = 2*i;
        if(a%b==0)
        {
            x = a/b;
            if(x>0)
            {

                st = x;
                //cout<<i<<SP<<st<<NL;
               // cout<<st<<NL;
                break;
            }
        }

    }
    if(st==0)
    {
        cout<<"IMPOSSIBLE\n";
    }
    else
    {
        vector<LL>v;
        cout<<y<<" = ";
        LL sum=0;
        for(LL i=st;;i++)
        {
            sum+=i;
            cout<<i;
            if(sum==y)break;
            cout<<" + ";
        }
        if(cs<=t)cout<<NL;

    }

    }
    return 0;
}
