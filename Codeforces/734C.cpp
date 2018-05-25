#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    vector<long long> sp1,sp2,m1,m2;
    long long i,j,k,m,n,x,y,z,result,jadu1,jadu2,mana1,mana2,count1=2000000001,count2=2000000001;
    cin>>n>>m>>k;
    cin>>x>>y;
    for(i=0;i<m;i++){ cin>>z; sp1.push_back(z);}
    for(i=0;i<m;i++){ cin>>z; m1.push_back(z); }
    for(i=0;i<k;i++){ cin>>z; sp2.push_back(z); }
    for(i=0;i<k;i++){ cin>>z; m2.push_back(z); }
    vector<pair<long long,long long>>v1,v2;
    for(i=0;i<m;i++) v1.push_back(make_pair(sp1[i],m1[i]));
    sort(v1.begin(),v1.end());
    //for(i=0;i<m;i++) cout<<v1[i].first<<" "<<v1[i].second<<" ";
    for(i=0;i<k;i++) v2.push_back(make_pair(sp2[i],m2[i]));
    //for(i=0;i<k;i++) cout<<v2[i].first<<" "<<v2[i].second<<" ";
    //cout<<endl;
    for(i=k-1;i>=0;i--)
    {
        jadu1=n*x;
        jadu2=n-v2[i].first;
        //cout<<v2[i].first<<endl<<endl;
        if(jadu2<0)
        {
            jadu2=0;
            continue;
        }
        mana2=y-v2[i].second;
        if(mana2<0)
        {
            jadu2=0;
            mana2=0;
            continue;
        }
        for(j=m-1;j>=0;j--)
        {
            mana1=mana2-v1[j].second;
            if(mana1<0)
            {
                mana1=0;
                continue;
            }
            jadu1=jadu2*v1[j].first;
            break;
        }
        //cout<<jadu1<<endl;
        count1=min(count1,jadu1);
        jadu2=mana1=mana2=0;
    }
    count1=min(count1,jadu1);
    //cout<<count1<<endl;
    jadu1=jadu2=mana1=mana2=0;
     for(i=m-1;i>=0;i--)
    {
        jadu1=n*x;
        mana1=y-v1[i].second;
        if(mana1<0)
        {
            mana1=0;
            continue;
        }
        for(j=k-1;j>=0;j--)
        {
            jadu2=n-v2[j].first;
            if(jadu2<0)
            {
                jadu2=0;
                continue;
            }
            mana2=mana1-v2[j].second;
            if(mana2<0)
            {
                mana2=jadu2=0;
                continue;
            }
            jadu1=jadu2*v1[i].first;
            break;
        }
        count2=min(count2,jadu1);
        jadu2=mana1=mana2=0;
    }
    count2=min(count2,jadu1);
    //cout<<count2<<endl;
    result=min(count1,count2);
    cout<<result<<"\n";
}
