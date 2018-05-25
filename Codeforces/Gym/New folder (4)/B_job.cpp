#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,n,x[105],y[105],z;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    for(i=0;i<n;i++)
    {
        LL sum=1,k=1,cnt=1;
        z=1;
        while(1)
        {
            z=1<<k;
            if(z<=y[i])
            {
                k++;
                sum+=z;
                if(sum>=x[i])
                {
                    sum-=z;
                    break;
                }
                cnt++;
            }
            else break;
        }
        if(sum<x[i])
        {
            LL p;
            p=x[i]-sum;
            double q;
            q=(double)p/y[i];
            //cout<<"hello "<<q<<endl;
            q=ceil(q);
            //cout<<"hello 2 "<<q<<endl;
            cnt+=(LL)q;
        }
        cout<<cnt<<"\n";
    }
}
