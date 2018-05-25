// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

    vector<LL>vv[200005];
int main()
{
    FastRead
    int n;
    cin>>n;
    LL ara[n+1],ara2[n+1];
    for(int i=0;i<n;i++) cin>>ara[i];
    for(int i=0;i<n;i++) cin>>ara2[i];
    sort(ara,ara+n);
    double mx=0;
    int z=0,k=0;
    do
    {
        double sum=0.0;
        for(int i=0;i<n;i++)
        {
            double x;
            x=(double)(ara[i]+1)/(ara2[i]+1);
            //cout<<x<<endl;
            sum+=x;
        }
        //cout<<sum<<endl;
        if(sum>mx)
        {
        z++;
        cout<<sum<<endl;
            //vv.clear();
            //cout<<"maxmax\n\n";
            for(int i=0;i<n;i++)
            {
                vv[z].push_back(ara[i]);
                cout<<ara[i]<<" ";
            }
           //if(z>1) break;
            cout<<endl;
            mx=sum;
            k=z;
        }
    }while(next_permutation(ara,ara+n));

    for(int i=0;i<vv[k].size();i++) cout<<vv[k][i]<<" ";
}
