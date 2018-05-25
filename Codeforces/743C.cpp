#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL n;
    cin>>n;
    if(n==1) cout<<-1;
    else cout<<n<<" "<<n+1<<" "<<n*(n+1);
}
