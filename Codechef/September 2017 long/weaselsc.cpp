#include<bits/stdc++.h>
#define ff first
#define ss second
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        int ara[n+1];
        for(int j=0;j<n;j++) cin>>ara[j];
        LL cnt=0,mx=0,x;
        for(int j=0;j<n;j++)
        {
            cnt=0;
            for(int k=j+1;k<n;k++)
            {
                //cout<<ara[j]<<" "<<ara[k]<<endl;
                if(ara[j]<=ara[k])
                {
                    cnt++;
                    //cout<<11111<<endl;
                }
                else break;
            }
            for(int k=j-1;k>=0;k--)
            {
                if(ara[j]<=ara[k])
                {
                    cnt++;
                    //cout<<22222<<endl;
                }
                else break;
            }
            x=ara[j]*(cnt+1);
            //cout<<cnt+1<<" "<<x<<endl;
            mx=max(mx,x);
        }
        cout<<mx<<"\n";
    }
}
