// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
pair<LL,LL>pr[5000005];
int main()
{
    LL i,j,n,x,y,z,p,q,sum;
    for(i=0;i<=5000001;i++)
    {
        p=i;
        q=-1;
        sum=0;
        while(p)
        {
            q++;
            y=p%10;
            p=p/10;
            sum+=y*(1<<q);
        }

        pr[i].first=sum;
        pr[i].second=i;
    }
    sort(pr,pr+5000000);
    /*for(i=0;i<=1000;i++)
    {
        cout<<pr[i].first<<" "<<pr[i].second<<"\n";
    }*/
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        cout<<pr[x-1].second<<"\n";
    }

}
