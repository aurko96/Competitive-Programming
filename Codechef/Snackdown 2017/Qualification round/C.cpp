#include<bits/stdc++.h>
#define LL long long
using namespace std;
pair<LL,int>pp[100002];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int y,z,t;
    int i,j,k,n,x;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>x;
        LL ara[100005];
       // memset(ara,0,sizeof(ara));
        for(j=0;j<n;j++) cin>>ara[j];
        sort(ara,ara+n);
        for(j=0;j<x;j++)
        {
            cin>>pp[j].first;
            pp[j].second=j;
        }
        sort(pp,pp+x);
        //for(j=0;j<x;j++) cout<<pp[j].first<<" "<<pp[j].second;
        y=0;
        LL ara2[100005];
       // memset(ara2,0,sizeof(ara2));
        for(j=0;j<x;j++)
        {
            LL cnt=0;
            //cout<<"start   "<<y<<endl;
            bool flag=0;
            int low,high,mid;
            low=y;
            high=n-1;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(ara[mid]<pp[j].first && ara[mid+1]>=pp[j].first)
                {
                    y=mid;
                    flag=1;
                    break;
                }
                else if(ara[mid]<pp[j].first) low=mid+1;
                else high=mid-1;
            }
            //cout<<"boom  "<<y<<endl;
//            for(k=y;k<n;k++)
//            {
//                if(ara[k]>=pp[j].first) break;
//            }
//            y=k;
            cnt=n-(y+1);
            if(!flag)
            {
                if(pp[j].first>ara[n-1])
                {
                    cnt=0;
                    y=n-1;
                }
                else
                {
                    cnt=n;
                    //y=0;
                ara2[pp[j].second]=cnt;
                continue;
                }
            }
           // y--;
            //cout<<"lololo   "<<cnt<<" "<<y<<endl;
            z=0;
            LL p;
            int q;
            for(k=y;k>=z;k--)
            {
                p=pp[j].first-ara[k];
                q=k-z;
                //cout<<"hello   "<<p<<" "<<q<<" "<<y<<" "<<z<<endl;
                if(p<=q)
                {
                   z+=p;
                   cnt++;
                }
                else break;
            }
           // cout<<"lalala  "<<cnt<<endl;
            ara2[pp[j].second]=cnt;
        }
        for(j=0;j<x;j++) cout<<ara2[j]<<"\n";
        //cout<<"\n";
    }
}
