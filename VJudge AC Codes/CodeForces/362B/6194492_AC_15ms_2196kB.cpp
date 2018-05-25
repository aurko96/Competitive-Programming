#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4000],i,m,n,x,y,count=0;
    cin>>m>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[0]==1 || a[n-1]==m)
    {
        cout<<"NO";
        return 0;
    }
    for(i=0;i<n-1;i++)
    {
        x=a[i];
        y=a[i+1];
        if(x+1==y)
        {
            count++;
            if(count>=2)
            {
                break;
            }
        }
        else
        {
            count=0;
        }

    }
    //cout<<count<<endl;
    if(count>=2)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
}
