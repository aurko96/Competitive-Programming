#include<bits/stdc++.h>

using namespace std;

#define inf 0x3f3f3f3f
#define LL long long
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define LOJ cout<<"Case "<<++cs<<": "<<ans<<endl;

//LL BigMod(LL B,LL P,LL M){LL R=1;while(P>0){if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;}return R;}
//LL InverseMod(LL B,LL M){return BigMod(B,M-2,M);}// if M is prime else Phi(M-1);


LL S[100005],n,a,b,L;

LL func(LL i)
{
    LL sum=0,pos;
    if((S[i]-i*L)>=a)pos=(S[i]-i*L);
    else pos=a;

    for(i=0;i<n;i++)
    {
        sum+=fabs(S[i]-pos);
        pos+=L;
    }
    return sum;
}
LL ter(LL l,LL r)
{
    LL l1,l2;
    for(int i=0;i<30;i++)
    {
        l1=(l*2+r)/3;
        l2=(l+2*r)/3;
        if(func(l1)>func(l2))r=l2;
        else l=l1;
    }
    return func(l);
}

LL call1()
{
    LL pos,i,sum=0;
    pos=b-(n*L);
    for(i=0;i<n;i++)
    {
        sum+=fabs(S[i]-pos);
        pos+=L;
    }
    return sum;
}
LL call2()
{
    LL pos,i,sum=0;
    pos=a;
    for(i=0;i<n;i++)
    {
        sum+=fabs(S[i]-pos);
        pos+=L;
    }
    return sum;
}
int main()
{
    //FastRead
    int test;
    cin>>test;
    while(test--)
    {
        LL i,j,k,ans,temp,cnt=0;
        cin>>n>>L>>a>>b;

        for(i=0; i<n; i++)cin>>S[i];
        sort(S,S+n);
        if(S[0]>=b)ans=call1();
        else if(S[n-1]<=a)ans=call2();
        else ans=ter(0,n-1);
        cout<<ans<<endl;




    }
}
