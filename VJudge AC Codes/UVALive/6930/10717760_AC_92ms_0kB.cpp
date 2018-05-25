
#include<bits/stdc++.h>

using namespace std;

#define inf 0x3f3f3f3f
#define LL long long
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define LOJ cout<<"Case "<<++cs<<": "<<ans<<endl;
#define Max3(x,y,z) max(x,max(y,z))

//LL BigMod(LL B,LL P,LL M){LL R=1;while(P>0){if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;}return R;}
//LL InverseMod(LL B,LL M){return BigMod(B,M-2,M);}// if M is prime else Phi(M-1);
struct circle
{
    LL x,y,r;
};
LL vis[1005];
circle ara[1005];
LL intersect(LL a,LL b)
{
    LL r1,r2,X,Y;
    r1=ara[a].r;
    r2=ara[b].r;
    X=(ara[a].x-ara[b].x);
    Y=(ara[a].y-ara[b].y);
    double dis=sqrt(X*X+Y*Y);
    double r=r1+r2;
    if(dis-r<1e-9)
    {
        if(vis[b]==1)vis[a]=2;
        else vis[a]=1;
        //cout<<a<<" "<<b<<endl;
        return 1;
    }
    return 0;

}
int main()
{
    FastRead
    LL test;
    cin>>test;
    while(test--)
    {
        memset(vis,0,sizeof(vis));
        LL n,i,j,k,v,w,a,b;
        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>ara[i].x>>ara[i].y>>ara[i].r;

        }
        v=ara[0].r;
        stack<LL>st;
        st.push(0);
        vis[0]=1;
        while(!st.empty())
        {
            a=st.top();
            st.pop();
            for(i=0; i<n; i++)
            {
                if(vis[i])continue;
                if( intersect(i,a))st.push(i);
            }

        }
        for(i=0;i<n;i++)
        {
            if(vis[i]==0)cout<<"not moving"<<endl;
            else
            {
                LL gc=__gcd(v,ara[i].r);
                cout<<v/gc;
                if((ara[i].r/gc)!=1)cout<<"/"<<(ara[i].r/gc);
                if(vis[i]==1)cout<<" clockwise"<<endl;
                else cout<<" counterclockwise"<<endl;
            }
        }
    }
}
