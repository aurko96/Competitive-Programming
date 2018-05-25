#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    int n,r;
    cin>>n>>r;
    int ara[5000];
    for(int i=0;i<n;i++) cin>>ara[i];
    double ans=0.0;
    vector<double>vv;
    vv.push_back(r);
    for(int i=1;i<n;i++)
    {
        if(abs(ara[i]-ara[i-1])>(r+r))
        {
            int z=-1;
            for(int j=i-2;j>=0;j--)
            {
               if(abs(ara[i]-ara[j])<=(r+r))
               {
                   z=j;
                   break;
               }
            }
            if(z==-1) vv.push_back(r);
            else
            {
                ans=sqrt(((r+r)*(r+r))-(abs(ara[i]-ara[z])*abs(ara[i]-ara[z])));
                ans+=vv[z];
                vv.push_back(ans);
            }
        }
        else
        {
            ans=sqrt(((r+r)*(r+r))-(abs(ara[i]-ara[i-1])*abs(ara[i]-ara[i-1])));
           // cout<<"ans 1 = "<<ans<<endl;
            ans+=vv[i-1];
           // cout<<"ans 2 = "<<ans<<endl;
            vv.push_back(ans);
        }
    }
    for(int i=0;i<vv.size();i++) cout<<fixed<<setprecision(10)<<vv[i]<<"\n";
    cout<<"\n";
}

/*

30 2
512 91 200 775 42 710 64 614 730 315 626 46 969 800 521 342 83 13 522 712 48 777 385 837 85 43 658 950 233 633

*/
