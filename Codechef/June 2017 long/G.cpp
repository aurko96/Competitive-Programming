#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL ara[100005],ara2[100005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,q;
        int a,b,c,d;
        cin>>n>>q;
        for(int j=0;j<n;j++) cin>>ara[j];
        for(int j=0;j<q;j++)
        {
            memset(ara2,0,sizeof(ara2));
            int cnt=0;
            cin>>a>>b>>c>>d;
            int x,y;
            for(int k=a-1,p=c-1;k<b;k++,p++)
            {
                ara2[ara[k]]++;
                ara2[ara[p]]++;
            }
            for(int k=a-1,p=c-1;k<b;k++,p++)
            {
                if(ara2[ara[k]]==1)
                {
                    x=ara[k];
                    cnt++;
                }
                if(ara2[ara[p]]==1)
                {
                    y=ara[p];
                    cnt++;
                }
            }
            if(cnt>2) cout<<"NO\n";
            else if(cnt==0) cout<<"YES\n";
            else
            {
//                cout<<"ans = "<<x<<" "<<y<<endl;
                int boro1=0,choto1=0,boro2=0,choto2=0;
                for(int k=a-1,p=c-1;k<b;k++,p++)
                {
                    if(ara[k]>x) boro1++;
                    else choto1++;
                    if(ara[p]>y) boro2++;
                    else choto2++;
                }
//                cout<<boro1<<" "<<choto1<<" "<<boro2<<" "<<choto2<<endl;
                if(boro1==boro2 && choto1==choto2) cout<<"YES\n";
                else cout<<"NO\n";
            }
        }
    }
}
