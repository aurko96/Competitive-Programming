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
        scanf("%d %d",&n,&q);

        vector<int>edge[100005],num,num2;
        unordered_map<int,unordered_map<int,LL> >mp;

        for(int j=1;j<=q;j++)
        {
            scanf("%d %d %d",&comm[j],&pp[j].ff,&pp[j].ss);
            if(comm[j]==2)
            {
                num2.push_back(j);
                for(int k=pp[j].ff;k<=pp[j].ss;k++)
                {
                    if(comm[k]==1) edge[j].push_back(k);
                    //else edge2[j].push_back(k);
                }

            }
            else
            {
                cnt[j]++;
                cnt[j]=(cnt[j]%mod+mod)%mod;
                num.push_back(j);
            }
        }
        for(int j=0;j<num2.size();j++)
        {

                for(int k=pp[num2[j]].ff;k<=pp[num2[j]].ss;k++)
                {
                    if(comm[k]==1)
                    {
                        cnt[k]++;
                        cnt[k]=(cnt[k]%mod+mod)%mod;
                        mp[num2[j]][k]++;
                        mp[num2[j]][k]=(mp[num2[j]][k]%mod+mod)%mod;
                    }
                    else
                    {
                        for(int w=0;w<edge[k].size();w++)
                        {
                            LL ex;
                            ex=mp[num2[j]][edge[k][w]]%mod;
                            mp[num2[j]][edge[k][w]]=((mp[num2[j]][edge[k][w]]%mod+mp[k][edge[k][w]]%mod)%mod+mod)%mod;
                            cnt[edge[k][w]]=((cnt[edge[k][w]]%mod+mp[num2[j]][edge[k][w]]%mod)%mod+mod)%mod;
                            cnt[edge[k][w]]=((cnt[edge[k][w]]%mod)-(ex%mod)+mod)%mod;
//                            cout<<"heree xyz  "<<num2[j]<<" "<<edge[k][w]<<" "<<k<<endl;
//                            cout<<"heree   "<<mp[num2[j]][edge[k][w]]<<" "<<mp[k][edge[k][w]]<<" "<<cnt[edge[k][w]]<<endl;
                        }
                    }
                }
        }
        for(int j=0;j<num.size();j++)
        {
            for(int k=pp[num[j]].ff;k<=pp[num[j]].ss;k++)
            {
                ans[k]=((ans[k]%mod+cnt[num[j]]%mod)%mod+mod)%mod;
            }
        }

        for(int j=1;j<=n;j++) printf("%lld ",ans[j]%mod);
        printf("\n");
    }
}

