#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int i,j,n,m,x,y,z;
    deque<int>dq1,dq2;
    cin>>z;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        dq1.push_back(x);
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>y;
        dq2.push_back(y);
    }
    int mx=4000000;
    int count=0,winner=0;
    while(!dq1.empty() && !dq2.empty())
    {
        if(dq1[0]>dq2[0])
        {
            dq1.push_back(dq2[0]);
            dq1.push_back(dq1[0]);
            dq1.pop_front();
            dq2.pop_front();
        }
        else if(dq1[0]<dq2[0])
        {
            dq2.push_back(dq1[0]);
            dq2.push_back(dq2[0]);
            dq2.pop_front();
            dq1.pop_front();
        }
        count++;
        if(dq1.empty())
        {
            winner=2;
            break;
        }
        else if(dq2.empty())
        {
            winner=1;
            break;
        }
        mx--;
        //cout<<mx<<endl;
        if(mx==0) break;
    }
    if(winner==0) cout<<-1<<"\n";
    else cout<<count<<" "<<winner<<"\n";
}
