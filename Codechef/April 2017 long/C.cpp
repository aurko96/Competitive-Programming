#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    string str;
    LL i,j,n,x,y,z,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        LL cnt1=0,cnt0=0,sum=0;
        cin>>str;
        for(j=str.size()-1;j>=0;j--)
        {
            if(str[j]=='1') str.pop_back();
            else break;
        }
        //cout<<"str = "<<str<<endl;
        for(j=0;j<str.size();j++)
        {
            if(str[j]=='1') cnt1++;
            else if(str[j]=='0')
            {
                if(cnt1>0) cnt0++;
                if((j+1)<str.size() && str[j+1]=='1')
                {
                    sum+=(cnt0+1)*cnt1;
                    cnt0=0;
                }
            }
        }
        sum+=(cnt0+1)*cnt1;
        cout<<sum<<"\n";
    }
}
