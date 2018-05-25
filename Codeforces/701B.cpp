#include<bits/stdc++.h>
#define debug cout<<"debug"
using namespace std;
pair<long long,long long>p[100005],d[100005];
int main()
{
    long long ara[100005],i,j,t,m,n,a,b,c,row=0,col=0;
    cin>>n>>m;
    t=n*n;
    c=t;
    a=(n+n)-1;
    for(i=0;i<m;i++)
    {
        cin>>p[i].first>>p[i].second;
        if(d[p[i].first].first>0 && d[p[i].second].second==0)
        {
            b=a-n-(row-1);
            c=t-b;
            ara[i]=c;
            t=c;
//            debug<<1<<endl;
//            cout<<"b="<<b<<" "<<"c="<<c<<" "<<"ara"<<ara[i]<<" "<<"t="<<t<<endl;
        }
        else if(d[p[i].first].first==0 && d[p[i].second].second>0)
        {
            b=a-n-(col-1);
            c=t-b;
            ara[i]=c;
            t=c;
//            debug<<2<<endl;
//            cout<<"b="<<b<<" "<<"c="<<c<<" "<<"ara"<<ara[i]<<" "<<"t="<<t<<endl;
        }
        else if(d[p[i].first].first>0 && d[p[i].second].second>0)
        {
            ara[i]=c;
            t=c;
//            debug<<3<<endl;
//            cout<<"b="<<b<<" "<<"c="<<c<<" "<<"ara"<<ara[i]<<" "<<"t="<<t<<endl;
        }
        else if(d[p[i].first].first==0 && d[p[i].second].second==0)
        {
            b=a-row-col;
            c=t-b;
            ara[i]=c;
            t=c;
//            debug<<4<<endl;
//            cout<<"b="<<b<<" "<<"c="<<c<<" "<<"ara"<<ara[i]<<" "<<"t="<<t<<endl;
        }
        d[p[i].first].first++;
        if(d[p[i].first].first==1)
        {
            row=row+d[p[i].first].first;
        }
        d[p[i].second].second++;
        if(d[p[i].second].second==1)
        {
            col=col+d[p[i].second].second;
        }
        if(ara[i]<0)
        {
            ara[i]=0;
        }
    }
    for(j=0;j<m;j++)
    {
        cout<<ara[j]<<" ";
    }
}
