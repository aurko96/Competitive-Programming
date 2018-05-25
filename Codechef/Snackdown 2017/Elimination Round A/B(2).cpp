#include<bits/stdc++.h>

using namespace std;

#define inf 0x3f3f3f3f
#define LL long long
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define LOJ cout<<"Case "<<++cs<<": "<<ans<<endl;

//LL BigMod(LL B,LL P,LL M){LL R=1;while(P>0){if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;}return R;}
//LL InverseMod(LL B,LL M){return BigMod(B,M-2,M);}// if M is prime else Phi(M-1);
LL ara[100005],n;

LL Max(LL a,LL b){if(a>b)return a;return b;}
LL Min(LL a,LL b){if(a<b)return a;return b;}

LL cal(LL n)
{
    LL sum1=0,sum2=0;
    sum1=(n*(n+1))/2;
    sum2=(n*(n-1))/2;
    return sum1+sum2;
}
LL call()
{
    LL Left[100005],Right[100005];
    Left[0]=0;Right[n+1]=0;
    LL h=0,flag=0,cnt=0,a=0,b=0,ans=0,i,j;


    for(i=1,j=n;i<=n;i++,j--)
    {
        if(ara[i]>a)a++;
        else if(ara[i]<a)a=ara[i];

        if(ara[j]>b)b++;
        else if(ara[j]<b)b=ara[j];

        Left[i]=a;
        Right[j]=b;
    }
    for(i=1;i<=n;i++)
    {
        //cout<<Left[i]<<"  "<<Right[i]<<endl;
        if(Left[i]!=Right[i])
        {
            if(Left[i]<Right[i])
            {
                h=Left[i];
                if(Left[i]==Left[i-1])h++;
            }
            else
            {
                h=Right[i];
                if(Right[i]==Right[i+1])h++;
            }
        }
        else h=Left[i];
        //cout<<"i "<<i<<" "<<Left[i]<<"  "<<Right[i]<<"  h"<<h<<endl;
        ans=Max(ans,h);
    }
    //cout<<ans<<endl;
    h=cal(ans);
    return h;
}
int main()
{
    FastRead
    int test;
    cin>>test;
    while(test--)
    {
        memset(ara,0,sizeof(ara));
        LL h,i,j,k,lo,hi,sum=0,ans;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>ara[i];
            sum+=ara[i];
        }
        //if(n%2==0)ans=Max(call(2,n),call(1,n-1));
        ans=call();

        cout<<sum-ans<<endl;

    }
}
/*
10
7
1 2 100 100 100 2 1
7
1 2 3 1 1 2 1
8
1 1 1 1 2 3 2 1
7
1 2 3 4 3 3 1

*/
