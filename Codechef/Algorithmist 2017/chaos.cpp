#include<bits/stdc++.h>
#define LL long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,r,g;
        cin >> n >> r >> g;
        cout << r + g - (n-1) << "\n";
    }
}
