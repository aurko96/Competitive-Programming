#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[200005],b,c,i,j,n,x=0,y,z,count=0,flag=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0) count++;
        else if(a[i]%2==0 && a[i]!=0) flag++;
        else
        {
            if(count%2!=0) x++;
            else flag++;
        }
    }
    if(x)
    {
        cout<<"NO"<<"\n";
        return 0;
    }
    if(n%2==0)
    {
        if(count%2==0 && flag%2==0) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    else
    {
        if(count%2==0 && flag%2!=0) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}
