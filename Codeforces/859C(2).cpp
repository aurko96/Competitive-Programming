// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n+1];
    for(int i=0;i<n;i++) cin>>ara[i];
    int bb=0,aa=0,sum,sum2;
    do{
        sum=sum2=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0) sum+=ara[i];
            else sum2+=ara[i];
        }
        bb=max(bb,sum);
        aa=max(aa,sum2);
    }while(next_permutation(ara,ara+n));
    cout<<bb<<" "<<aa<<endl;
}
