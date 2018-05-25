#include<bits/stdc++.h>
#define LL long long
using namespace std;
int ara[2502][2502];
int ara2[2502];
int flag2;
int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(nullptr);
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        //memset(ara,0,sizeof(ara));
        //memset(ara2,0,sizeof(ara2));
        int n,k,x,y,z;
        int len[2502];
        scanf("%d %d",&n,&k);
        int mx=0;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&len[j]);
            if(mx<len[j]) mx=len[j];
            for(int p=0;p<len[j];p++) scanf("%d",&ara[j][p]);
        }
        int cnt=0,num=0;
        //int flag2=0;
        for(int j=0;j<n;j++)
        {
            for(int p=j+1;p<n;p++)
            {
                bool flag=0;
                num=0;
                for(int q=0;q<mx;q++)
                {
                    //if(ara[j][q]>k || ara[p][q]>k){ flag=1; break; }
                    if(num==k) break;
                    if((mx-(q+1))<(k-num)) break;
                    if(q<len[j])
                    {
                        if(ara[j][q]>k)
                        {
                            flag=1;
                            break;
                        }
                        if(ara2[ara[j][q]]<=flag2)
                        {
                            ara2[ara[j][q]]=1+flag2;
                            num++;
                        }
                    }
                    if(q<len[p])
                    {
                        if(ara[p][q]>k)
                        {
                            flag=1;
                            break;
                        }
                        if(ara2[ara[p][q]]<=flag2)
                        {
                            ara2[ara[p][q]]=1+flag2;
                            num++;
                        }
                    }
                }
                if(num==k && flag==0)
                {
                    cnt++;
                }
                flag2++;
                //memset(ara2,0,sizeof(ara2));
            }
        }
        printf("%d\n",cnt);
    }
}
