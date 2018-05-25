// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    FastRead
    long long i,j,n,x,y,z;
    long long ara[200005];
    set<long long>vect[5];
    vector<long long>vv;
    map<long long,int>mp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x==1) vect[1].insert(ara[i]);
        else if(x==2) vect[2].insert(ara[i]);
        else if(x==3) vect[3].insert(ara[i]);
    }
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x==1) vect[1].insert(ara[i]);
        else if(x==2) vect[2].insert(ara[i]);
        else if(x==3) vect[3].insert(ara[i]);
    }
    cin>>y;
    for(i=0;i<y;i++)
    {
        cin>>z;
        if(vect[z].empty())
        {
            vv.push_back(-1);
            continue;
        }
        auto it=vect[z].begin();
        long long p;
        p=*it;
        if(mp[p]==0) mp[p]=1;
        else
        {
            vv.push_back(-1);
            continue;
        }
        vv.push_back(p);
        set<long long>::iterator it1,it2,it3;
        it1=vect[1].find(p);
        it2=vect[2].find(p);
        it3=vect[3].find(p);
        if(it1!=vect[1].end())vect[1].erase(it1);
        if(it2!=vect[2].end())vect[2].erase(it2);
        if(it3!=vect[3].end())vect[3].erase(it3);
    }
    for(i=0;i<vv.size();i++) cout<<vv[i]<<" ";
}
