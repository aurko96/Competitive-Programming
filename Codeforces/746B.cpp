// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    FastRead
    LL i,j,n,x,y,z;
    string str,str2,str3,str4,str5;
    cin>>n>>str;
    str4=str;
    while(1)
    {
        if(str.size()==0) break;
        x=str.size()/2;
        //cout<<x<<" "<<str.size()<<endl;
        if(str.size()%2==0)
        {
            str2+=str[x-1];
             str.erase(x-1,1);
        }
        else if(str.size()%2!=0)
        {
            str2+=str[x];
             str.erase(x,1);
        }
        //str2+=str[x];
        //str.erase(x,1);
        //cout<<str<<" "<<str2<<endl;
    }
    //cout<<str2<<endl;
    str5=str2;
    while(1)
    {
        if(str2.size()==0) break;
        x=str2.size()/2;
        //cout<<x<<" "<<str2.size()<<endl;
        if(str2.size()%2==0)
        {
            str3+=str2[x-1];
             str2.erase(x-1,1);
        }
        else if(str2.size()%2!=0)
        {
            str3+=str2[x];
             str2.erase(x,1);
        }
        //str2.erase(x,1);
        //cout<<str2<<" "<<str3<<endl;
    }
     cout<<str5;
     cout<<endl;
     cout<<str3;
}
