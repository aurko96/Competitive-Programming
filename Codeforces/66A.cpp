#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    string s;
    int i,j,n,x,y,z;
    cin>>s;
    n=s.size();
    if((s<="127" && n==3) || n<3) cout<<"byte";
    else if((s<="32767" && n==5) || n<5) cout<<"short";
    else if((s<="2147483647" && n==10) || n<10) cout<<"int";
    else if((s<="9223372036854775807" && n==19) || n<19) cout<<"long";
    else cout<<"BigInteger";
}
