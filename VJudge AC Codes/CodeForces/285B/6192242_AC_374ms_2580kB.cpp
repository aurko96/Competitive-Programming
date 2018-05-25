#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100005],b,c,i,n,x,y,count=0;
    cin>>n>>b>>c;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    y=b;
    while(1)
    {
        y=a[y-1];
        if(b==c)
        {
            cout<<0;
            return 0;
        }
        if(y==b)
        {
            cout<<-1;
            break;
        }
        if(y!=c)
        {
            count++;
        }
        if(y==c)
        {
            count++;
            cout<<count;
            return 0;
        }
    }
}
