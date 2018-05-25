#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    LL t,i,j,n,x,y,z;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        list<LL> ara;
        for(j=0;j<n;j++)
        {
            cin>>z;
            ara.push_back(z);
        }
        LL cnt=0,cnt2=0;
        while(1)
        {
            auto it=ara.begin();
            auto it2=++ara.begin();
            auto it3=++ara.begin();
            it3=++it3;
            while(it3!=ara.end())
            {
                x=*it;
                y=*it3;
                if(x==0 && y==0)
                {
                    it3++;
                    it2=ara.erase(it2);
                    cnt++;
                }
                else
                {
                    ++it3;
                    ++it2;
                    ++it;
                }
            }
            if(cnt2==cnt) break;
            else cnt2=cnt;
        }
        if(cnt2%2==0) cout<<"Bob\n";
        else cout<<"Alice\n";
    }
}
