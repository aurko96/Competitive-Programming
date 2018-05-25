#include<bits/stdc++.h>
#define ff first
#define ss second
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int mod=1e9+7;
int comm[100005];
LL cnt[100005];
LL ans[100005];
int n,q;

int main()
{
    //FastRead
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        pair<int,int>pp[100005];
        memset(ans,0,sizeof(ans));
        memset(cnt,0,sizeof(cnt));
        //memset(comm,0,sizeof(comm));
        scanf("%d %d",&n,&q);
//        for(int j=0;j<=100001;j++) edge[j].clear();
//        for(int j=0;j<=100001;j++) mp[j].clear();
//        num.clear();
        vector<int>edge[100005],num;
        unordered_map<int,unordered_map<int,int> >mp;

        for(int j=1;j<=q;j++)
        {
            //cin>>comm[j]>>pp[j].ff>>pp[j].ss;
            scanf("%d %d %d",&comm[j],&pp[j].ff,&pp[j].ss);
//            if(comm[j]==2)
//            {
//                for(int k=pp[j].ff;k<=pp[j].ss;k++) edge[j].push_back(k);
//
//            }
        }
        for(int j=1;j<=q;j++)
        {
            if(comm[j]==1)
            {
                cnt[j]++;
                cnt[j]=(cnt[j]%mod+mod)%mod;
                num.push_back(j);
            }
            else
            {
                for(int k=pp[j].ff;k<=pp[j].ss;k++)
                {
                    if(comm[k]==1)
                    {
                        cnt[k]++;
                        cnt[k]=(cnt[k]%mod+mod)%mod;
                        mp[j][k]++;
                        mp[j][k]=(mp[j][k]%mod+mod)%mod;
                    }
                    else
                    {
                        for(int w=0;w<num.size();w++)
                        {
                            int ex;
                            //mp[j][num[w]]+=(mp[k][num[w]]%mod+mod)%mod;
                            ex=mp[j][num[w]];
                            mp[j][num[w]]=((mp[j][num[w]]+mp[k][num[w]])%mod+mod)%mod;
                            //mp[j][num[w]]=(mp[j][num[w]]%mod+mod)%mod;
                            cnt[num[w]]+=(mp[j][num[w]]%mod);
                            cnt[num[w]]=((cnt[num[w]]-ex)%mod+mod)%mod;
                        }
                    }
                }
//                for(int w=0;w<num.size();w++)
//                {
//                    //cnt[num[w]]+=(mp[j][num[w]]%mod+mod)%mod;
//
//                    cnt[num[w]]=((cnt[num[w]]+mp[j][num[w]])%mod+mod)%mod;
//                }
            }
        }
        for(int j=0;j<num.size();j++)
        {
            for(int k=pp[num[j]].ff;k<=pp[num[j]].ss;k++)
            {
                ans[k]=((ans[k]%mod+cnt[num[j]]%mod)%mod+mod)%mod;
            }
        }

//        for(int j=1;j<=q;j++)
//        {
//            if(comm[j]==1)
//            {
//                for(int k=pp[j].ff;k<=pp[j].ss;k++)
//                {
//                    ans[k]=((ans[k]%mod+cnt[j]%mod)%mod+mod)%mod;
//                }
//            }
//        }

        for(int j=1;j<=n;j++) printf("%lld ",ans[j]%mod);
        printf("\n");
    }
}
