
#include<bits/stdc++.h>

using namespace std;

#define inf 0x3f3f3f3f
#define LL long long
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define LOJ cout<<"Case "<<++cs<<": "<<ans<<endl;
#define Max3(x,y,z) max(x,max(y,z))

LL BigMod(LL B,LL P,LL M)
{
    LL R=1;
    while(P>0)
    {
        if(P%2==1)
        {
            R=(R*B)%M;
        }
        P/=2;
        B=(B*B)%M;
    }
    return R;
}

int main()
{
    FastRead
    int test;
    cin>>test;
    while(test--)
    {
        LL a,b,c,d,mod,A,B;
        cin>>a>>b>>c>>d;
        mod=max(a,c)+1;
        //A=BigMod(a,b,mod);
        //B=BigMod(c,d,mod);

        long double aa,bb,cc,dd,AA,BB;
        aa=(double)a;
        bb=(double)b;
        cc=(double)c;
        dd=(double)d;
        AA=bb;
        BB=dd*(log(cc)/log(aa));
        if(AA-BB>1e-9)cout<<">"<<endl;
        else cout<<"<"<<endl;

//        if(A<B)cout<<"<"<<endl;
//        else cout<<">"<<endl;
    }
}
