#include<bits/stdc++.h>

using namespace std;

#define inf 0x3f3f3f3f
#define LL long long
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);


//LL BigMod(LL B,LL P,LL M){LL R=1;while(P>0){if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;}return R;}
//LL InverseMod(LL B,LL M){return BigMod(B,M-2,M);}// if M is prime else Phi(M-1);
set<LL>ss;
LL len(int l,int a,int q)
{
    if(a>l)return 0;
    LL i,cnt=1;
    i=a*q;
    while(fabs(i)<=l)
    {
        ss.insert(i);
        cnt++;
        i*=q;
    }
    return cnt;
}
int main()
{
    FastRead
    LL a,q,l,m,i,j,k,cnt=0,ret=0,x;
    cin>>a>>q>>l>>m;
    if(q==1)ret=1;
    if(a==0 || q==0)ret=1;
    if(ret!=1)cnt=len(l,a,q);
    for(i=0; i<m; i++)
    {
        cin>>x;
        if(q==1 && x==a)ret=2;
        else if((a==0 || q==0)&& x==0)ret=2;
        else if(ss.count(x))cnt--;
    }
    if(a>l)cout<<"0"<<endl;
    else if(ret==1)cout<<"inf"<<endl;
    else if(ret==2)cout<<"0"<<endl;
    else cout<<cnt<<endl;
}
