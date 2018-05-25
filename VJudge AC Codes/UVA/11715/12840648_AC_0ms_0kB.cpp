#include<bits/stdc++.h>

using namespace std;

#define LCM(a,b)                (a / __gcd(a,b) ) *b
#define GCD(a,b)                __gcd(a,b)
#define dist(x1,y1,x2,y2)       sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define distl(x1,y1,x2,y2)      sqrtl((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define fRead(x)                freopen(x,"r",stdin)
#define fWrite(x)               freopen (x,"w",stdout)
#define LL                      long long
#define ULL                     unsigned long long
#define pb                      push_back
#define tcase                   cout<<"Case "<<C++<<": ";
#define all(a)                  a.begin(),a.end()
#define Unique(a)               sort(all(a)),a.erase(unique(all(a)),a.end
#define ABS(x)                  ((x)<0?-(x):(x))
#define min3(a,b,c)             min(a,min(b,c))
#define min4(a,b,c,d)           min(a,min(b,min(c,d)))
#define max3(a,b,c)             max(a,max(b,c))
#define max4(a,b,c,d)           max(a,max(b,max(c,d)))
#define PI                      acos(-1.0)
#define ff                      first
#define ss                      second
#define SP(x,y)                 fixed<<setprecision((y))<<(x)
#define FastRead                ios_base::sync_with_stdio(0);cin.tie(NULL);
#define rep(x, l, r)            for (int x = l; x<=r; ++x)
#define repp(x,r)               for (int x = 0; x <r; ++x)
#define per(x, l, r)            for (int x = l; x >= r; --x)
#define perr(x, l)              for (int x = l-1; x >= 0; --x)
#define NN                      cout<<"\n";
#define NNN                     cout<<"\n------------------------------\n";

//***********************************************************************//
//                      SHAHED AHMED, CSE'15, IUT                        //
//***********************************************************************//

int main()
{
        double u,v,a,s,t;
        double ans1,ans2;
        int num,cnt=0;
        while(cin>>num)
        {
                cnt++;
                ans1=ans2=0.0;
                if(num==0) break;
                else if(num==1)
                {
                        cin>>u>>v>>t;
                        ans1=(u+v)/2.0;
                        ans1*=t;
                        ans2=2.0*(ans1-(u*t));
                        ans2/=(t*t);
                        cout<<fixed<<setprecision(3)<<"Case "<<cnt<<": "<<ans1<<" "<<ans2<<"\n";

                }
                else if(num==2)
                {
                        cin>>u>>v>>a;
                        ans1=(v*v)-(u*u);
                        ans1/=(2.0*a);
                        ans2=(2.0*ans1);
                        ans2/=(u+v);
                        cout<<fixed<<setprecision(3)<<"Case "<<cnt<<": "<<ans1<<" "<<ans2<<"\n";
                }
                else if(num==3)
                {
                        cin>>u>>a>>s;
                        ans1=(u*u)+(2.0*a*s);
                        ans1=sqrt(ans1);
                        ans2=(2.0*s);
                        ans2/=(u+ans1);
                        cout<<fixed<<setprecision(3)<<"Case "<<cnt<<": "<<ans1<<" "<<ans2<<"\n";
                }
                else if(num==4)
                {
                        cin>>v>>a>>s;
                        ans1=(v*v)-(2.0*a*s);
                        ans1=sqrt(ans1);
                        ans2=(2.0*s);
                        ans2/=(ans1+v);
                        cout<<fixed<<setprecision(3)<<"Case "<<cnt<<": "<<ans1<<" "<<ans2<<"\n";
                }
        }

}
