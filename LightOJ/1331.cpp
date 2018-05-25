#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define PI acos(-1.0)
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        double a,b,c;
        cin>>a>>b>>c;
        double x,y,z;
        x=b+c;
        y=a+c;
        z=a+b;
        double peri;
        peri=(x+y+z)/2;
       // cout<<"perimeter = "<<peri<<endl;
        double arr;
        arr=sqrt(peri*(peri-x)*(peri-y)*(peri-z));
        //cout<<"area of triangle  = "<<arr<<endl;
        double ang1,ang2,ang3;
        ang1=acos(((y*y)+(z*z)-(x*x))/(2*y*z));
        ang1=(180.0/PI)*ang1;
       // cout<<"angle1 = "<<ang1<<endl;
        ang2=acos(((x*x)+(z*z)-(y*y))/(2*x*z));
        ang2=(180.0/PI)*ang2;
       // cout<<"angle2 = "<<ang2<<endl;
        ang3=acos(((y*y)+(x*x)-(z*z))/(2*y*x));
        ang3=(180.0/PI)*ang3;
       // cout<<"angle3 = "<<ang3<<endl;
        double arc1,arc2,arc3;
        arc1=PI*(a*a)*(ang1/360.0);
        arc2=PI*(b*b)*(ang2/360.0);
        arc3=PI*(c*c)*(ang3/360.0);
       // cout<<"arc = "<<arc1<<" "<<arc2<<" "<<arc3<<endl;
        double ans;
        ans=(arr-arc1-arc2-arc3);
        cout<<fixed<<setprecision(6)<<"Case "<<(int)i<<": "<<ans<<"\n";
    }
}
