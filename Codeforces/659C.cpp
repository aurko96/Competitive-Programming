#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[100006],b[100000],i,n,j=0,k,count=0,x=1,sum=0,y,z;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;;)
    {

        if(a[i]==x)
        {
            //y=x;
            //cout<<"y="<<y<<endl;
            i++;
            x++;
        }
        if(a[i]!=x)
        {
            b[j]=x;
            sum=sum+b[j];
            if(sum>k)
            {
                sum=sum-b[j];
                break;
            }
            j++;
            count++;
            x++;
        }
    }
    cout<<count<<endl;
    for(i=0;i<count;i++)
    {
        cout<<b[i]<<" ";
    }
}
