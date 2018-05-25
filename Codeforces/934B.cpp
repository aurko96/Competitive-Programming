#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=0,y=0;
    if(n>36) cout<<-1<<"\n";
    else
    {
        if(n%2==0)
        {
            x=n/2;
        }
        else
        {
            x=n/2;
            y=1;
        }
    }
    if(y==1 && x==0)
    {
        cout<<"6";
        return 0;
    }
    //cout<<x+y<<endl;

    for(int i=0;i<x;i++) cout<<"8";
    for(int i=0;i<y;i++) cout<<"0";
}
