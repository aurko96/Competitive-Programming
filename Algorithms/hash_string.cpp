#include<bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
using namespace std;
ULL power[100005];
map<ULL,ULL>mp,same;
string str[100005];

int main()
{
    int n,m;
    ULL pr=3797;

    power[0]=1;

    for(int i = 1;i<100005;i++)power[i] = power[i-1]*pr;

    cin>>n>>m;

    for(int i=0;i<n;i++) cin>>str[i];

    ULL cnt=0;

    for(int i=0;i<n;i++)
    {
        ULL hash=0;
        for(int j=0;j<m;j++)hash+=(power[j]*str[i][j]);

        cnt -= same[hash]*m;

        same[hash]++;

        for(int j=0;j<m;j++)
        {
            ULL newhash = hash-(power[j]*str[i][j]);
            cnt += mp[newhash];
            mp[newhash]++;
        }

    }
    cout << cnt << endl;
}
