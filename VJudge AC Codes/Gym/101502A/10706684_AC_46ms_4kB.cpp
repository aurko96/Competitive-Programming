
#include<bits/stdc++.h>

using namespace std;

#define inf 0x3f3f3f3f
#define LL long long
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define LOJ cout<<"Case "<<++cs<<": "<<ans<<endl;
#define Max3(x,y,z) max(x,max(y,z))

//LL BigMod(LL B,LL P,LL M){LL R=1;while(P>0){if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;}return R;}
//LL InverseMod(LL B,LL M){return BigMod(B,M-2,M);}// if M is prime else Phi(M-1);

int main()
{
    FastRead
    int test;
    cin>>test;
    while(test--)
    {
        LL x,y;
        cin>>y>>x;
        LL ans=(y*100)/(100+x);
        cout<<ans<<endl;
    }
}
