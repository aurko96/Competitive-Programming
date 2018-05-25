#include<bits/stdc++.h>
using namespace std;
long long a[100005],t,i,j,m,n,x,y,z;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cin>>t;
    for(i=0;i<t;i++)
    {
        memset(a,0,sizeof(a));
        cin>>n>>m;
        x=y=0;
        int count=0;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);
        reverse(a,a+n);
        for(j=0;j<n;j++)
        {
            x=x+a[j];
            count++;
            if(x>=m)
            {
                y=1;
                break;
            }
        }
        //cout<<x<<" "<<count<<endl;
        if(y) cout<<count<<"\n";
        else cout<<-1<<"\n";
    }
}
