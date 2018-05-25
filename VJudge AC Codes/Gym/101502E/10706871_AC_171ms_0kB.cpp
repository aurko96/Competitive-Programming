#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x;
        cin>>x;
        int ara[3];
        memset(ara,0,sizeof(ara));
        for(int j=0;j<x;j++)
        {
            string str;
            cin>>str;
            if(str[0]=='b' || str[0]=='B') ara[0]++;
            else if(str[0]=='k' || str[0]=='K') ara[1]++;
            else if(str[0]=='l' || str[0]=='L') ara[2]++;
        }
        int y;
        y=ara[0]/2;
        int mn=1e9;
        mn=min(y,min(ara[1],ara[2]));
        cout<<mn<<"\n";
    }
}
