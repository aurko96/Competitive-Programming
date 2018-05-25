#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    long long i,j,n,a[100005],b,c,x,y,z,count=0,flag=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]!=a[i])
        {
            if(count==0)
            {
                x=a[i+1]-a[i];

            }
            if(count>0)
            {
                if((a[i+1]-a[i])!=x)
                {
                    flag=1;
                }
            }
            count++;
        }
    }
    if(count<=2 && flag==0)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }

}
