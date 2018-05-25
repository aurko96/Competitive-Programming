#include<bits/stdc++.h>

using namespace std;

#define inf 0x3f3f3f3f
#define LL long long
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define LOJ cout<<"Case "<<++cs<<": "<<ans<<endl;
#define foo(n) cout<<n<<endl;continue;
//#define endl "\n"
//LL BigMod(LL B,LL P,LL M){LL R=1;while(P>0){if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;}return R;}
//LL InverseMod(LL B,LL M){return BigMod(B,M-2,M);}// if M is prime else Phi(M-1);



vector<LL>mp(100005);
LL mx;

LL call(LL x,LL k,LL n)
{
    LL lo,hi,mid,sub,ans,ret=-1,need;
    lo=0;
    hi=x;
    if(x==n-1)sub=0;
    else sub=mp[x+1];
    //cout<<sub<<endl;
    //vector<int>ara;
    while(lo<=hi)
    {
        mid=(lo+hi)/2;
        ans=mp[mid]-sub;
        need=(x-mid+1)*k;
        if(need-ans==mid)return mid;
        else if(need-ans>mid)lo=mid+1;
        else{ret=mid; hi=mid-1;}
        //cout<<mid<<endl;

    }
    //cout<<mid<<endl;
    //cout<<"yooooo"<<ret<<"  "<<mid<<endl;
    //cout<<x<<"  "<<ret<<endl;
    if(ret==-1)return x+1;
    return ret;

}
int main()
{
    FastRead
    LL test;
    cin>>test;
    while(test--)
    {
        mp.clear();
        LL n,q,i,j,k,x,cnt,y,p1,p0;
        cin>>n>>q;
        vector<LL>st;
        vector<LL> ::iterator it,it2,it3,it1;
        for(i=0; i<n; i++)
        {
            cin>>x;
            st.push_back(x);
        }
        sort(st.begin(),st.end());
        mx=st[n-1];
        for(i=n-1; i>=0; i--)
        {
            if(i==n-1)mp[i]=st[i];
            else mp[i]=mp[i+1]+(st[i]);
        }
        for(i=0; i<q; i++)
        {
            cin>>k;

            if(k<=st[0]){cout<<n<<endl;continue;}
            if(k>st[n-1]+n-1){cout<<"0"<<endl;continue;}

            it=lower_bound(st.begin(),st.end(),k);
            it--;
            //cout<<*it<<endl;
            p1=distance(st.begin(),it);
           // cout<<cnt<<"+"<<call(p1,k,n)<<endl;
           cout<<n-call(p1,k,n)<<endl;
        }

    }
}
/*
1
5 4
5 8 9 10 21
10

1
7 10
10 10 10 10 11 11 13
*/
