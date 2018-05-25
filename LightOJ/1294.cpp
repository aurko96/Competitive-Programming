#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        LL n,m;
        cin>>n>>m;
        LL x;
        x=m*(n/2);
        cout<<"Case "<<i<<": "<<x<<"\n";
    }
}

/*

n = 12 , m = 3

-1-2-3+4+5+6-7-8-9+10+11+12 = 18

-1 +4 = 3     -7 + 10 =3
-2+ 5 = 3     -8 + 11 =3
-3 + 6 =3     -9 + 12 =3

-->  3+3+3+3+3+3 = 18
-->  3 * 6 = 18
-->  3*(12/2) = 18
-->  m*(n/2) = ans
-->  m occurred n/2 times in the series

*/
