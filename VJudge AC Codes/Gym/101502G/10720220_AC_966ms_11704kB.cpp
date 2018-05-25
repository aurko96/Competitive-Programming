
#include<bits/stdc++.h>

using namespace std;

#define inf 0x3f3f3f3f
#define LL long long
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define LOJ cout<<"Case "<<++cs<<": "<<ans<<endl;
#define Max3(x,y,z) max(x,max(y,z))
#define ULL unsigned long long
#define N 100005
#define endl "\n"
//LL BigMod(LL B,LL P,LL M){LL R=1;while(P>0){if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;}return R;}
//LL InverseMod(LL B,LL M){return BigMod(B,M-2,M);}// if M is prime else Phi(M-1);
const ULL hs = 3797;

ULL F[N], H[N];
int ans[N];
unordered_map<ULL,int>mp[N];
void Hash(string str)
{
    H[0]=0;
    for(int i=1;i<str.size();i++)
    {
        H[i]=H[i-1]*hs+str[i];

    }
}
void calc(int n)
{
    ULL h;
    for(int i=0;i<n;i++)
    {
        h=(H[n]-H[n-i-1]*F[i+1]);
        mp[i+1][h]++;
        ans[i+1]=max(mp[i+1][h],ans[i+1]);
    }

}

int main()
{
    FastRead
    F[0]=1;
    for(int i=1;i<N;i++)F[i]=F[i-1]*hs;
    int test;
    cin>>test;
    //scanf("%d",&test);
    while(test--)
    {

        memset(ans,0,sizeof(ans));
        int n,q,i,j,k,x,sz=0,len;
        string str;
        cin>>n>>k;
        //scanf("%d %d",&n,&k);
        for(i=0;i<n;i++)
        {
            cin>>str;
            Hash("0"+str);
            len=str.size();
            calc(len);
            sz=max(sz,len);

        }
        for(i=0;i<k;i++)
        {
            cin>>x;
            cout<<ans[x]<<endl;

        }
        for(int i=0;i<sz+2;i++)mp[i].clear();
    }
}
