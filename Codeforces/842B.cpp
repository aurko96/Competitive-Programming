// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int main()
{
    FastRead
    LL r,d;
    cin>>r>>d;
    int n;
    cin>>n;
    LL cnt=0;
    for(int i=0;i<n;i++)
    {
        LL x,y,z;
        cin>>x>>y>>z;
        LL arr;
        arr=((x*x)+(y*y));
        LL m;
        m=r-d;
        if(arr<=(r*r) && arr>=(m*m))
        {
            double dis;
            dis=(double)sqrt((x*x)+(y*y));
           // cout<<"hello "<<dis<<endl;
            LL rr,rr2;
            rr=abs(r-z);
            rr2=abs(m-z);
            LL add,add2;
            add=r+z;
            add2=m+z;
            //cout<<"hiii  "<<r<<" "<<m<<" "<<z<<" "<<rr<<" "<<rr2<<" "<<add<<" "<<add2<<endl;
            if(dis<=rr && dis>=rr2)
            {
                if(dis>=add || dis>=add2)
                {
                    cnt++;
                    //cout<<"okkkkkkkkkk "<<endl;
                }
                //cnt++;
               // cout<<i<<endl;
            }
        }
    }
    cout<<cnt<<"\n";

}
