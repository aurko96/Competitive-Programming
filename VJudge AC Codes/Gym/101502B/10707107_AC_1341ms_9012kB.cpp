

#include<bits/stdc++.h>

using namespace std;

#define inf 0x3f3f3f3f
#define LL long long
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define LOJ cout<<"Case "<<++cs<<": "<<ans<<endl;
#define Max3(x,y,z) max(x,max(y,z))
#define pii pair<LL,LL>

vector<LL>two;
LL n,row[100005],col[100005];
unordered_map<LL,LL>mp;
map<pii,LL>mp2;
int main()
{
    //FastRead

    LL test;
    //cin>>test;
    scanf("%lld",&test);
    while(test--)
    {
        mp.clear();
        //mp2.clear();
        LL n,i,j,k,x,y,mn=0,cnt=0;
        //cin>>n;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            //cin>>x>>y;
            scanf("%lld %lld",&x,&y);
            row[i]=x;
            col[i]=y;
            //if(mp2[make_pair(x,y)])mn++;
            mp[y]++;
            //pii o=make_pair(y,x);
            //mp2[o]=1;


        }
        for(i=0;i<n;i++)if(mp[row[i]])cnt+=mp[row[i]];
        //cout<<cnt-mn<<" ";
        printf("%lld\n",cnt-mn);

    }
}
