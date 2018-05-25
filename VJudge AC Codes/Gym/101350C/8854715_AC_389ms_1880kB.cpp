#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int test;
    cin>>test;
    while(test--)
    {
        int n,i,j,k,x,y,gc;
        long long sum=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            //cout<<x<<endl;
            if(i==0)gc=x;
            else gc=__gcd(gc,x);
            sum+=x;
        }
        cout<<sum<<" "<<gc<<endl;


    }
}
