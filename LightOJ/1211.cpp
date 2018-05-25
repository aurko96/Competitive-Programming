#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,x;
        cin>>n;
        int ara[6];
        ara[0]=ara[1]=ara[2]=0;
        ara[3]=ara[4]=ara[5]=1001;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<3;k++)
            {
                cin>>x;
                ara[k]=max(x,ara[k]);
            }
            for(int k=3;k<6;k++)
            {
                cin>>x;
                ara[k]=min(x,ara[k]);
            }
        }
        if(ara[3]>ara[0] && ara[4]>ara[1] && ara[5]>ara[2])
        {
            int y;
            y=(ara[3]-ara[0])*(ara[4]-ara[1])*(ara[5]-ara[2]);
            cout<<"Case "<<i<<": "<<y<<"\n";
        }
        else  cout<<"Case "<<i<<": "<<0<<"\n";
    }
}
