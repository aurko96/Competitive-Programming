// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;


int main()
{
    int n,x;
    cin>>n>>x;
    int ara[500];
    memset(ara,0,sizeof(ara));
    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        ara[y]++;
    }
    //sort(ara,ara+n);
    int cnt=0;
    for(int i=0;i<=100;i++)
    {
        if(i>x) break;
        if(i==x)
        {
           if(ara[i]>0) cnt++;
        }
        if(ara[i]==0)
        {
            if(i!=x) cnt++;
        }
    }
    cout<<cnt<<"\n";
}
