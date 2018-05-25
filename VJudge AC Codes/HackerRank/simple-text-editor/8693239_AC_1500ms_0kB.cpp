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

struct data
{
    int id,qtype;
    int num;
    string str;
};
vector<data>Q;

const int N = 1000000;
vector<int>G[N+5];

int q;
int answer[N+6];
void dfs(int node,string str)
{
    if(node>q)return;
    if(Q[node].qtype==1){
        str += Q[node].str;
    }else if(Q[node].qtype==2){
        str.erase(str.end()-Q[node].num,str.end());
    }else if(Q[node].qtype==3){
        answer[node] = str[Q[node].num-1];
    }
//    cout << "node " << node << " " << str << " "  << Q[node].num  << endl;
    for(int i : G[node])dfs(i,str);
}
int main()
{
    FastRead
    stack<int>st;
    cin >> q;
    Q.pb({0,0,0,""});
    st.push(0);
    for(int i = 1;i<=q;i++){
        int ch;
        cin >> ch;
        string s;
        int qt;

        if(ch==1){
            cin >> s;
            G[st.top()].pb(i);
            st.push(i);
        }else if(ch==2 || ch==3){
            cin >> qt;
            G[st.top()].pb(i);
            if(ch==2)st.push(i);
        }else{
            st.pop();
        }
        Q.pb({i,ch,qt,s});
    }
    string ss;
    dfs(0,ss);
//    cout << endl;
//    for(int i =1;i<=q;i++){
//        cout << i << " : ";
//        for(int j : G[i])cout << j << " ";
//        cout << endl;
//    }
    for(int i = 1;i<=q;i++){
        if(Q[i].qtype==3)cout << (char)answer[i] << "\n";
    }
}
