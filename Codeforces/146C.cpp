#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str2;
    int i,j,n,x,y,z;
    cin>>str>>str2;
    int ara[200];
    ara['4']=0;
    ara['7']=0;
    for(i=0;i<str.size();i++)
    {
        if(str[i]!=str2[i]) ara[str[i]]++;
    }
    int mn=2e9,mx=0;
    mn=min(mn,min(ara['4'],ara['7']));
    mx=max(mx,max(ara['4'],ara['7']));
    if(mn==mx) cout<<mn<<"\n";
    else cout<<mn+(mx-mn)<<"\n";

    //main();
}
