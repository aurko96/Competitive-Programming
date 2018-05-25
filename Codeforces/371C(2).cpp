#define fRead(x)  freopen(x,"r",stdin)
#define fWrite(x) freopen (x,"w",stdout)

#define LL long long
#define ULL unsigned long long
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define INF 2e18
#define PI acos(-1.0)

#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(a,min(b,min(c,d)))
#define max4(a,b,c,d) max(a,max(b,max(c,d)))
#define SQR(a) ((a)*(a))
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define ROF(i,a,b) for(int i=a;i>=b;i--)
#define REP(i,b) for(int i=0;i<b;i++)
#define MEM(a,x) memset(a,x,sizeof(a))

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

#include<bits/stdc++.h>

using namespace std;
string s;
int counter(char ch)
{
    int cnt=0;
    REP(i,s.length())if(s[i]==ch)cnt++;
    return cnt;
}
int main()
{
    FastRead
    cin >> s;
    LL Sb = counter('B');LL Ss = counter('S');LL Sc = counter('C');

    LL Nb,Ns,Nc;cin >> Nb >> Ns >> Nc;LL Pb,Ps,Pc;cin >> Pb >> Ps >> Pc;LL r;cin >> r;

    LL ans = 0;LL lo = 0,hi=10000000LL*10000000LL,mid;
    cout<<"cnt  =  "<<Sb<<" "<<Ss<<" "<<Sc<<endl;
    while(lo<=hi)
    {
        mid = (lo+hi)>>1;
        cout<<mid<<endl;
        LL lb = mid*Sb;        LL ls = mid*Ss;        LL lc = mid*Sc;

        LL eb = max(0LL,lb-Nb);  LL es = max(0LL,ls-Ns);  LL ec = max(0LL,lc-Nc);

        LL tk = eb*Pb + es*Ps + ec*Pc;

        cout<<" val  = "<<lb<<" "<<ls<<" "<<lc<<endl;
        cout<<" baki = "<<eb<<" "<<es<<" "<<ec<<endl;
        cout<<" taka = "<<tk<<" "<<r<<endl;
        if(tk<=r)
        {
            ans = mid;
            lo=mid+1;
        }
        else hi = mid-1;
    }
    cout << ans;
}
