#include<bits/stdc++.h>
#define LL long long
using namespace std;
pair<LL,LL>pp[100005];
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        LL n,l,a,b;
        cin>>n>>l>>a>>b;
        for(int j=0;j<n;j++)
        {
            cin>>pp[j].first;
            pp[j].second=pp[j].first+l;
        }
        sort(pp,pp+n);
        LL x,y,z,sum1=0;
        x=a;
        y=b;
        for(int j=0;j<n;j++)
        {
            if(pp[j].first<x || pp[j].first>x)
            {
                z=x-pp[j].first;
                if(z>=0) x=pp[j].second+1+z;
                else if(z<0)
                {
                    z=abs(z);
                    z++;
                    x=pp[j].second-z+1;
                }
                cout<<"1st  = "<<z<<" "<<x<<endl;
                sum1+=z;
            }
        }
        LL sum2=0;
        for(int j=n-1;j>=0;j--)
        {
            cout<<j<<endl;
            if(pp[j].second>y || pp[j].second<y)
            {
                z=y-pp[j].second;
                cout<<" pp  "<<pp[j].second<<endl;
                if(z<0)
                {
                    z=abs(z);
                    y=pp[j].first-1+z;
                }
                else if(z>=0)
                {
                    //z=abs(z);
                   // z--;
                    y=pp[j].first+z;
                }
                cout<<"2nd = "<<z<<" "<<y<<endl;
               // y=pp[j].first-1;
                sum2+=z;
            }
        }
        LL ans;
        cout<<" ans  "<<sum1<<" "<<sum2<<endl;
        ans=min(sum1,sum2);
        cout<<ans<<"\n";
    }
}
