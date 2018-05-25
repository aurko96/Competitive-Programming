#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,n=0,m=0,x,y,cnt=0;
    cin>>x>>y;
    for(;;)
    {
        x=x*3;
        //n+=x;
        y=y*2;
        //m+=y;
        cnt++;
        //cout<<x<<" "<<y<<endl;
        if(x>y) break;
    }
    cout<<cnt<<"\n";
    //main();
}
