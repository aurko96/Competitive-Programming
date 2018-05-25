#include <bits/stdc++.h>
#define LL long long
#define mx 1000001
using namespace std;
int stat[mx];
void sieve()
{
    stat[1] = 1;
    for(int i=2;i<mx;i++) stat[i] = i;
    for(int i=4;i<mx;i+=2)  stat[i] = 2;
    for(int i=3;i*i<mx;i++)
    {
        if(stat[i]==i)
        {
            for (int j=i*i;j<mx;j+=i)
            {
                if(stat[j]==j) stat[j] = i;
            }

        }
    }
}

vector<int>primeFact(int x)
{
    vector<int>vv;
    while (x!=1)
    {
        vv.push_back(stat[x]);
        x=x/stat[x];
    }
    return vv;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    sieve();
    int n;
    cin>>n;
    int ara[100005];
    for(int i=0;i<n;i++) cin>>ara[i];
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int l,r,x,y,z,sum=0;
        cin>>l>>r>>x>>y;
        for(int j=l-1;j<r;j++)
        {
            z=ara[j];
            vector<int>num;
            num=primeFact(z);
            vector<int>::iterator it,it2;
            it=upper_bound(num.begin(),num.end(),y);
            it2=lower_bound(num.begin(),num.end(),x);
//            for(int k=0;k<num.size();k++) cout<<num[k]<<" ";
//            cout<<endl;
            int pp=0;
            pp=abs(it-it2);
//            cout<<"hello =  "<<pp<<endl;
            sum+=pp;
        }
        cout<<sum<<"\n";

    }
}
