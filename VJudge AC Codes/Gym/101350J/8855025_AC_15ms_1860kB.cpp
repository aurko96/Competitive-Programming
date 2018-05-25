#include<bits/stdc++.h>
#define PI acos(-1.0)
using namespace std;
int main()
{
    double r,p;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        double x,y,z;
        cin>>a>>b;
        //cout<<PI<<endl;
        x=(double)a;
        y=(double)b;
        r=(PI*x*x)*(y/360.0);
        z=(y*PI)/180.0;
        p=(x*x)*sin(z);
        //cout<<"andsn "<<sin(y)<<endl;
        p/=2.0;
        double ans;
        ans=r-p;
        cout<<fixed<<setprecision(6)<<ans<<"\n";
    }
}
