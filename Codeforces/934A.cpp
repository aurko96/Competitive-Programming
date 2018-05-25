#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int ara[100],ara2[100];
    LL ara3[100002];
    for(int i=0;i<n;i++) cin>>ara[i];
    for(int i=0;i<m;i++) cin>>ara2[i];
    sort(ara,ara+n);
    sort(ara2,ara2+m);
    LL x;
    int mx=0;
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            x=ara[i]*ara2[j];
            ara3[k]=x;
            cout<<ara[i]<<" "<<ara2[j]<<" "<<ara3[k]<<endl;
            k++;
        }
    }
    //cout<<k<<endl;
    //x=ara[n-2]*ara2[m-1];
    sort(ara3,ara3+k);
   // for(int i=0;i<n*m;i++) cout<<ara3[i]<<endl;
    //if(ara[n-1]>0 && )
    cout<<ara3[k-2]<<"\n";
}
