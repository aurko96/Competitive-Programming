#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,val=0;
    cin>>n>>a;
    double ang,div;
    ang=(double)(n-2)*((double)180/n);
    div=(double)ang/(n-2);
    //cout<<ang<<" "<<div<<endl;
    double mn=1000000000.000,x;
    for(int i=(n-2);i>=1;i--)
    {
        x=abs(ang-a);
        //cout<<x<<endl;
        if(x<mn)
        {
            mn=x;
            val=i;
        }
        ang-=div;
    }
    int v1,v2,v3;
    v1=1;
    v2=2+val;
    v3=v2-1;
    cout<<v1<<" "<<v2<<" "<<v3<<"\n";
}
