#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin>>n>>k;
        int ara[500];
        for(int j=0;j<k;j++) cin>>ara[j];
        sort(ara,ara+k);
        int mx=0;
        mx=max(mx,ara[0]-1);
        for(int j=1;j<k;j++)
        {
            int x;
            x=ceil(double(ara[j]-ara[j-1]-1)/2);
           // cout<<" X = "<<x<<endl;
            mx=max(mx,x);
        }
        mx=max(mx,n-ara[k-1]);
        cout<<mx+1<<"\n";
    }
}
