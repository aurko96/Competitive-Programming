#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    LL i,j,n,x,y,z;
    char ch;
    string str,str2;
    cin>>n>>x;
    str.push_back('1');
    for(i=1;i<=n-1;i++)
    {
        ch=i+48+1;
        //cout<<ch<<endl;
        str2+=str;
        str.push_back(ch);
        str+=str2;
        //cout<<"kfjk "<<str<<endl;
        str2.clear();
        //str2+=str;
        cout<<str<<"\n"<<str2<<"\n";
    }
    cout<<str[x-1];
}
