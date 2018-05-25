#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,n,x,y,z;
    string str1,str2,str3,str4;
    cin>>str1;
    if(str1[0]!='-'){ cout<<str1; return 0; }
    str2=str3=str1;
    str2.erase(str2.end()-1);
    str3.erase(str3.end()-2);
    str4=" ";
    str1=str1+str4+str2+str4+str3;
    istringstream iss(str1);
    iss>>x>>y>>z;
    //cout<<x<<" "<<y<<" "<<z<<endl;
    n=max(x,max(y,z));
    cout<<n<<endl;
}
