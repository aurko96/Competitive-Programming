#include<bits/stdc++.h>

using namespace std;

#define fRead(x)  freopen(x,"r",stdin)
#define fWrite(x) freopen (x,"w",stdout)

#define LL long long
#define ULL unsigned long long
#define ff first
#define ss second
#define pb push_back
#define INF 2e16
#define PI acos(-1.0)
#define mk make_pair
#define pii pair<int,int>
#define pll pair<LL,LL>


#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(a,min(b,min(c,d)))
#define max4(a,b,c,d) max(a,max(b,max(c,d)))
#define SQR(a) ((a)*(a))
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define ROF(i,a,b) for(int i=a;i>=b;i--)
#define REP(i,b) for(int i=0;i<b;i++)
#define MEM(a,x) memset(a,x,sizeof(a))
#define ABS(x) ((x)<0?-(x):(x))

#define scanI(a) scanf("%d",&a)
#define scanI2(a,b) scanI(a) , scanI(b)
#define scanI3(a,b,c) scanI(a), scanI(b), scanI(c)
#define scanI4(a,b,c,d) scanI(a), scanI(b), scanI(c), scanI(d)

#define scanL(a) scanf("%I64d",&a)
#define scanL2(a,b) scanL(a) , scanL(b)
#define scanL3(a,b,c) scanL(a), scanL(b), scanL(c)
#define scanL4(a,b,c,d) scanL(a), scanL(b), scanL(c), scanL(d)

#define SORT(v) sort(v.begin(),v.end())
#define REV(v) reverse(v.begin(),v.end())


#define FastRead ios_base::sync_with_stdio(0);cin.tie(nullptr);

#ifdef MATRIX

const int N=3;
const LL mod = 10007;
void MatMul(int A[N][N], int B[N][N])
{
    int R[N][N];
    memset(R, 0, sizeof(R));
    REP(i, 3) REP(j, 3) REP(k, 3) R[i][j] = (R[i][j] + A[i][k] * B[k][j]) % mod;
    REP(i, 3) REP(j, 3) B[i][j] = R[i][j];
}

int R[N][N] = {{2,0,0},{1,0,0},{1,0,0}};
int M[N][N] = {{1,1,2},{1,0,0},{0,1,0}};

void MatPow(int B)
{
    while(B)
    {
        if(B & 1) MatMul(M, R);
        MatMul(M, M);
        B = B >> 1;
    }
}
#endif

bool Check(int N,int pos) { return (bool)(N&(1<<pos)); }
int Set(int N,int pos) { return (N|(1<<pos)); }

int fx[ ] = {-1,0,1,0};
int fy[ ] = {0,1,0,-1};

inline LL BigMod(LL B,LL P,LL M){LL R=1;while(P>0){if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;}return R;}
#ifdef FAC
LL fac[200005];void FacGen(){fac[0]=1;FOR(i,1,200000)fac[i]=(fac[i-1]*i)%mod;}
LL COM(LL a,LL b){return ((fac[a]*BigMod((fac[b]*fac[a-b])%mod,mod-2,mod))%mod+mod)%mod;}
#endif

#ifdef SIEVE
const int N = 100000;
bool stat[N+5];
void siv()
{
    int sq = sqrt(N);for(int i =4;i<=N;i+=2)stat[i]=1;
    for(int i=3;i<=sq;i+=2)if(!stat[i])for(int j=i*i;j<=N;j+=2*i)stat[j]=1;
}
#endif

int main()
{
    FastRead
    int n,p;
    cin >> n >> p;
    list<int>L;
    for(int i = 0;i<n;i++)
    {
        int c;
        cin >> c;
        L.push_back(c);
    }
    auto it = L.begin();
    for(int i = 1;i<p;i++)it++;

    int q;
    cin >> q;
    while(q--)
    {
        string s;
        cin >> s;
        if(s=="moveLeft")
        {
            if(it==L.begin())continue;
            it--;
        }
        else if(s=="moveRight")
        {
            it++;
            if(it==L.end()){
                it--;
                continue;
            }
        }
        else if(s=="print")
        {
            cout << *it << "\n";
        }
        else if(s=="insertLeft")
        {
            int x;
            cin >> x;
            L.insert(it,x);
        }
        else if(s=="insertRight")
        {
            int x;
            cin >> x;
            it++;
            L.insert(it,x);
            it--;
            it--;
        }
    }


}
