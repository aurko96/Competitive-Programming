#include<bits/stdc++.h>
#define LL long long
using namespace std;
int n,m,w,yy[50002];


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>n>>w;
        int x;
        for(int j=0; j<n; j++) cin>>x>>yy[j];
        sort(yy,yy+n);
        int ret=0;
        int j=0;
        int idx;
        idx=j;
        while(j<n)
        {
            while(idx<n && yy[idx]<=yy[j]+w)
            {
                idx++;
            }
            ret++;
            //cout<<idx<<" "<<yy[idx]<<" "<<ret<<endl;
            j=idx;
        }
        cout<<"Case "<<i<<": "<<ret<<"\n";
    }
}

