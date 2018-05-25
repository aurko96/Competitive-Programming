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

int tree[400005];
int ara[100005];
void build(int at,int L,int R)
{
    if(L==R)
    {
        tree[at]=ara[L];
        return;
    }

    int mid = (L+R)/2;
    build(2*at,L,mid);
    build(2*at+1,mid+1,R);
    tree[at]=min(tree[2*at],tree[2*at+1]);
}

int query(int at,int L,int R,int l,int r)
{
//    cout << L << " " << R << " " << l << " " << r << "\n";
    if(r<L or R<l)return INFINITY;
    if(l<=L and R<=r)
    {
        return tree[at];
    }
        int mid = (L+R)/2;
        int x = query(2*at,L,mid,l,r);
        int y = query(2*at+1,mid+1,R,l,r);

    return min(x,y);
}

void update(int node, int L, int R, int index, int newvalue)
{
    if (index > R || index < L)
        return;
    if (L >= index && R <= index) {
        tree[node] = newvalue;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (L + R) / 2;
    update(Left, L, mid, index, newvalue);
    update(Right, mid + 1, R, index, newvalue);
    tree[node] = min(tree[Left] ,tree[Right]);
}

int main()
{
    FastRead
    int t,cases=0;
    cin >> t;

    while(t--)
    {
        int n,q;
        cin >> n >> q;
        REP(i,n)cin >> ara[i];
        cout << "Scenario " << "#" << ++cases << ":\n";
        build(1,0,n-1);
        while(q--)
        {
            int a,b;
            cin >> a >> b;
            cout << query(1,0,n-1,a-1,b-1) << "\n";
        }
    }


}
