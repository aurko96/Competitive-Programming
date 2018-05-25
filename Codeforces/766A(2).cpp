#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    string str,str2;
    LL i,j,m,n,x=0,y,z,count=0;
    cin>>str>>str2;
    n=str.size();
    m=str2.size();
    if(str==str2) cout<<-1;
    else  cout<<max(n,m)<<"\n";
}
