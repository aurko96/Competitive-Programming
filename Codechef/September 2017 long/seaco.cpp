#include<bits/stdc++.h>
#define ff first
#define ss second
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
LL mod=1e9+7;
LL comm[100005];
LL cnt[100005];
LL ans[100005];
LL n,q;
vector<LL>edge[100005];
void call(LL x)
{
    for(int i=0;i<edge[x].size();i++)
    {
        if(comm[edge[x][i]]==1)
        {
            cnt[edge[x][i]]++;
            cnt[edge[x][i]]%=mod;
        }
        else call(edge[x][i]);
    }
}
int main()
{
    FastRead
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        pair<LL,LL>pp[100005];
        memset(ans,0,sizeof(ans));
        memset(cnt,0,sizeof(cnt));
        memset(comm,0,sizeof(comm));
        cin>>n>>q;
        for(int j=0;j<=100001;j++) edge[j].clear();
        for(int j=1;j<=q;j++)
        {
            cin>>comm[j]>>pp[j].ff>>pp[j].ss;
            if(comm[j]==2)
            {
                for(int k=pp[j].ff;k<=pp[j].ss;k++) edge[j].push_back(k);

            }
        }
        for(int j=1;j<=q;j++)
        {
            if(comm[j]==1)
            {
                cnt[j]++;
                cnt[j]%=mod;
            }
            else
            {
                for(int k=0;k<edge[j].size();k++)
                {
                    if(comm[edge[j][k]]==1)
                    {
                        cnt[edge[j][k]]++;
                        cnt[edge[j][k]]%=mod;
                    }
                    else call(edge[j][k]);
                }
            }
        }
        for(int j=1;j<=q;j++)
        {
            if(comm[j]==1)
            {
                for(int k=pp[j].ff;k<=pp[j].ss;k++)
                {
                    ans[k]=((ans[k]%mod+cnt[j]%mod)%mod+mod)%mod;
                }
            }
        }
        for(int j=1;j<=n;j++) cout<<ans[j]%mod<<" ";
        cout<<"\n";
    }
}
