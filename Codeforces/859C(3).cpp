// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int main()
{
    LL n;
    cin>>n;
    LL ara[1000];
    for(LL i=0;i<n;i++) cin>>ara[i];
    //sort(ara,ara+n);
    LL csum[1000];
    csum[0]=ara[0];
    for(LL i=1;i<n;i++) csum[i]=csum[i-1]+ara[i];
    LL ucsum[1000];
    ucsum[0]=ara[n-1];
    for(LL i=1;i<n;i++) ucsum[i]=ucsum[i-1]+ara[n-i-1];
//    for(int i=0;i<n;i++) cout<<ucsum[i]<<" ";
//    cout<<endl;
    LL mn=1e18;
    LL aa=0,bb=0;
    for(LL i=0;i<n-1;i++)
    {
        LL x;
        x=csum[n-1]-csum[i];
        LL mm;
        mm=abs(x-csum[i]);
        //cout<<mm<<" "<<x<<" "<<csum[i]<<endl;
        if(mm<mn)
        {
            mn=mm;
            bb=max(x,csum[i]);
            aa=min(x,csum[i]);
        }
        else if(mm==mn)
        {
            //cout<<"hello\n";
            if(x>bb && csum[i]>bb)
            {
                bb=max(x,csum[i]);
                aa=min(x,csum[i]);
            }
            else if(x>bb)
            {
                bb=x;
                aa=csum[i];
            }
            else if(csum[i]>bb)
            {
                bb=csum[i];
                aa=x;
            }
        }
    }
    int alice=0,bob=0;
    alice=aa;
    bob=bb;
    for(LL i=0;i<n-1;i++)
    {
        LL x;
        x=ucsum[n-1]-ucsum[i];
        LL mm;
        mm=abs(x-ucsum[i]);
        //cout<<mm<<" "<<x<<" "<<csum[i]<<endl;
        if(mm<mn)
        {
            mn=mm;
            bb=max(x,ucsum[i]);
            aa=min(x,ucsum[i]);
        }
        else if(mm==mn)
        {
            //cout<<"hello\n";
            if(x>bb && ucsum[i]>bb)
            {
                bb=max(x,ucsum[i]);
                aa=min(x,ucsum[i]);
            }
            else if(x>bb)
            {
                bb=x;
                aa=ucsum[i];
            }
            else if(ucsum[i]>bb)
            {
                bb=ucsum[i];
                aa=x;
            }
        }
    }
    //cout<<alice<<" "<<bob<<" "<<aa<<" "<<bb<<endl;
    if(bob>=bb)
    {
        cout<<alice<<" "<<bob<<"\n";
    }
    else
    {
        cout<<aa<<" "<<bb<<"\n";
    }
}
