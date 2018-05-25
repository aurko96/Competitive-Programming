#include<bits/stdc++.h>
using namespace std;
bool isValid(int pos,int len)
{
    if(pos<0 || pos>=len) return 0;
    return 1;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
         int n;
         cin>>n;
         string str;
         cin>>str;
         int j=0,cnt=0;
         while(1)
         {
             if(!isValid(j,n)) break;
             if(str[j]=='.')
             {
                 cnt++;
                 j+=3;
             }
             else j++;
         }
         cout<<"Case "<<i<<": "<<cnt<<"\n";
    }
}
