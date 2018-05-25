#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++)
    {
        if(n%10==0) n/=10;
        else n--;
    }
    cout<<n<<"\n";
}
