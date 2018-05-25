#include<bits/stdc++.h>

using namespace std;

#define endl "\n"
#define inf 0x3f3f3f3f
#define LL long long
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define LOJ cout<<"Case "<<++cs<<": "<<ans<<endl;

//LL BigMod(LL B,LL P,LL M){LL R=1;while(P>0){if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;}return R;}
//LL InverseMod(LL B,LL M){return BigMod(B,M-2,M);}// if M is prime else Phi(M-1);




int main()
{
    FastRead
    LL test;
    cin>>test;
    while(test--)
    {
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
        for(i=0; i<q; i++)
        {

            cnt=0;
            cin>>k;
            if(k<=st[0])
            {
                cout<<n<<endl;
                continue;
            }


            it=lower_bound(st.begin(),st.end(),k);
            cnt=n-distance(st.begin(),it);

            if(it==st.begin())
            {
                cout<<cnt<<endl;
                continue;
            }
            p0=0;


            it--;
            x=*it;
            it=lower_bound(st.begin(),st.end(),x);
            p1=distance(st.begin(),it);

            while(p0<p1)
            {

                x=p1-p0;
                //cout<<x<<"xxxx"<<endl;
                if(k-st[p1]<=x)
                {
                    cnt++;
                    y=k-st[p1];
                    p0+=y;
                    it--;
                    x=*it;
                    it=lower_bound(st.begin(),st.end(),x);
                    p1=distance(st.begin(),it);
                }
                else break;

            }
            cout<<cnt<<endl;


        }

    }
}
