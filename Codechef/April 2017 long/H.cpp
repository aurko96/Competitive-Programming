#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    LL i,j,k,n,x,y,z;
    LL t,ara[12],ara2[12];
    cin>>t;
    for(i=0;i<t;i++)
    {
        LL cnt=0;
        cin>>x>>y;
        for(j=0;j<=9;j++) cin>>ara[j];
        //cout<<"in "<<x<<" "<<y<<"\n";
        for(j=x;j<=y;j++)
        {
            memset(ara2,0,sizeof(ara2));
            LL flag=0;
            ostringstream s;
            s<<j;
            string str(s.str());
            //cout<<str.size()<<endl;
            for(k=0;k<str.size();k++)
            {
                if(str[0]=='0') flag=1;
                z=str[k]-48;
                //cout<<z<<" ";
                ara2[z]++;
               // cout<<"ara = "<<ara2[z]<<"\n";
                //if(ara2[z]>=ara[z] && ara2[z]!=0) flag=1;
            }
            for(k=0;k<=9;k++)
            {
                if(ara2[k]==ara[k]) flag=1;
            }
            //cout<<"\n";
            if(!flag) cnt++;
            //cout<<"hello "<<j<<" "<<str<<" "<<cnt<<endl;
        }
        cout<<cnt<<"\n";
    }
}
