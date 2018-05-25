#include<bits/stdc++.h>
using namespace std;
int ara[10000],dp[21][10000];
int x,y;

int call(int pos,int val)
{
    //cout<<pos<<" "<<val<<endl;
    if(val==x) return val;
    if(val>x) return -100000;
    if(dp[pos][val]!=-1)return dp[pos][val];
    if(pos==y)
    {
        if(val<=x) return val;
        else return -10000;
    }
    int ret=0;
//    for(int i=pos;i<y;i++)
//    {
//        ret=max(ret,call(i+1,val+ara[pos]));
//    }

//    int a,b;
//    a=ara[pos]+call(pos+1);
//    b=call(pos+1);
//    if(a>x) ret=b;
//    else ret=max(a,b);

    ret=max(call(pos+1,val+ara[pos]),call(pos+1,val));
    return dp[pos][val]=ret;
}
int call2(int pos)
{
    //cout<<pos<<" "<<val<<endl;
    //if(val==x) return val;
    //if(val>x) return -100000;
    if(pos==y)return 0;
    //if(dp[pos][val]!=-1)return dp[pos][val];
    if(pos==y)
    {
        if(val<=x) return val;
        else return -10000;
    }
    int ret=0;

    int a,b;
    a=ara[pos]+call(pos+1);
    b=call(pos+1);

    if(a>x) ret=b;
    else ret=max(a,b);

    return ret;
    //return dp[pos][val]=ret;
}
void rec(int pos,int val)
{
    //cout<<val<<endl;
    if(val==x) return;
    if(val>x) return;
    if(pos==y)
    {
        return ;
        //if(val<=x) return val;
        //else return 0;
    }
    int ret=0,a,b,c;
    a=call(pos,val);
    b=call(pos+1,val+ara[pos]);
    c=call(pos+1,val);

    //ret=max(ret,call(i+1,val+ara[pos]));
    if(a==b)
    {
        cout<<ara[pos]<<" ";
        rec(pos+1,val+ara[pos]);
    }
    else rec(pos+1,val);


    //return ret;
}

int main()
{
    while(cin>>x>>y)
    {
        memset(dp,-1,sizeof(dp));
        for(int i=0; i<y; i++) cin>>ara[i];
        int n;
        n=call(0,0);
        rec(0,0);
        cout<<"ans = "<<n<<endl;
    }
}
