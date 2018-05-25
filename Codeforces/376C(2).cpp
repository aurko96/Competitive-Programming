#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    string str,str2;
    cin>>str;
    str2=str;
    LL x,y,rem;
    do
    {
        //cout<<str<<endl;
        rem=0;
        if(str[0]=='0') continue;
        for(int i=0;i<str.size();i++)
        {
            y=str[i]-48;
            rem=rem*10+y;
            rem=rem%7;
        }
        if(rem==0)
        {
            cout<<str;
            return 0;
        }

    }while(next_permutation(str.begin(),str.end()));
    //cout<<endl;
    do
    {
       // cout<<str2<<endl;
        rem=0;
        if(str2[0]=='0') continue;
        for(int i=0;i<str2.size();i++)
        {
            y=str2[i]-48;
            rem=rem*10+y;
            rem=rem%7;
        }
        if(rem==0)
        {
            cout<<str2;
            return 0;
        }

    }while(prev_permutation(str2.begin(),str2.end()));
    cout<<0;

}

