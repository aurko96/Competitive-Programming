// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    int i,j,n,x,y,z,count=0;
    cin>>x>>y>>z;
    for(i=1;;i++)
    {
        n=x*i;
        if(n>z) break;
        if(n%y==0)
        {
            //cout<<n<<endl;
            count++;
        }
    }
    cout<<count<<"\n";
}
