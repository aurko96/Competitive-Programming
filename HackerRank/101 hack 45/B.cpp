// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    int i,j,n,x,y,z;
    cin>>n>>x;
    if(x>n)
    {
        cout<<-1;
        return 0;
    }
    if(x==2 && n>2)
    {
        cout<<-1;
        return 0;
    }
    y=n-x;
    z=(x-1)+(y*2);
    cout<<z<<"\n";
    //main();
}
