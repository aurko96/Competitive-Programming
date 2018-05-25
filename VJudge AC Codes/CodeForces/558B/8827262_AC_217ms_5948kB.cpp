#include<bits/stdc++.h>
#define LL long long
using namespace std;
map<int,int>mp;
//bool vis[1000001];
int main()
{
    //int ara[100005];
    int i,j,n,x,y,z=1e9;
    cin>>n;
    //LL mx2=0;
    pair<int,int>p[100005];
    int mx2=0;
    for(i=0;i<n;i++)
    {
        cin>>p[i].first;
        p[i].second=i+1;
        mp[p[i].first]++;
        mx2=max(mx2,mp[p[i].first]);
    }
    //cout<<mx2<<endl<<endl;
    sort(p,p+n);
//    for(i=0;i<n;i++)
//    {
//        cout<<p[i].first<<" "<<p[i].second<<endl;
//    }
//    cout<<endl<<endl;
    int l,mn=1e9,mx=0,r;
    for(i=0;i<n;i++)
    {
        //cout<<mn<<" "<<mx<<endl;
        if(i==n-1 && mp[p[i].first]==mx2)
        {
            mn=min(mn,p[i].second);
           mx=max(mx,p[i].second);
           //cout<<mn<<" "<<mx<<endl;
            if(z==1e9)
            {
                l=mn;
                r=mx;
                z=r-l;
            }
            else
            {
                 x=mx-mn;
                if(x<z)
                {
                    z=x;
                    l=mn;
                    r=mx;
                }
            }
            mn=1e9;
            mx=0;
            //cout<<"ll2 "<<l<<" "<<r<<endl;
        }
        else if(mp[p[i].first]==mx2 && p[i].first==p[i+1].first && i!=n-1)
        {
            mn=min(mn,p[i].second);
            mx=max(mx,p[i].second);
            //cout<<mn<<" "<<mx<<endl;
           // l=mn;
           // r=mx;
        }
        else if(mp[p[i].first]==mx2 && p[i].first!=p[i+1].first && i!=n-1)
        {
            mn=min(mn,p[i].second);
            mx=max(mx,p[i].second);
            //cout<<mn<<" "<<mx<<endl;
            if(z==1e9)
            {
                l=mn;
                r=mx;
                z=r-l;
            }
            else
            {
                 x=mx-mn;
                if(x<z)
                {
                    z=x;
                    l=mn;
                    r=mx;
                }
            }
            mn=1e9;
            mx=0;
            //cout<<" ll "<<l<<" "<<r<<endl;
        }
    }
    cout<<l<<" "<<r<<"\n";
}
