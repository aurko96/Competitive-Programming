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
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            int x;
            x=i^j;
            //cout<<i<<" "<<j<<" "<<(i+j)<<" "<<x<<endl;
            if(x<(i+j) && x>=i && x>=j && x<=n)
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<"\n";
}
