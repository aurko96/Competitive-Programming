#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int main()
{
    string str;
    cin>>str;
    string str2;
    str2=str;
    reverse(str2.begin(),str2.end());
    cout<<str<<str2;
}
