#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[2000],i,n,x=0,y=0,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            count++;

        }
        if(a[i]!=a[i+1])
        {
            if(count>y)
            {
                y=count;
            }
            count=0;
            x=x+1;
        }
    }
    cout<<y+1<<" "<<x<<endl;
}
