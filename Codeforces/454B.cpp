#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x,count=0,flag=0;
    cin>>n;
    deque<int>v(n);
    for(deque<int>::iterator p=v.begin();p!=v.end();p++)
    {
        cin>>x;
        *p=x;
    }
    for(i=0;i<v.size();i++)
    {
        if(v[i]<=v[i+1])
        {
            count++;
        }
    }
    if(count==n-1)
    {
        cout<<0;
        return 0;
    }
    for(i=1;i<=n;i++)
    {
        if(v[n-2]<=v[n-1])
        {
            count--;
        }
        v.push_front(v[n-1]);
        v.pop_back();
        if(v[0]<=v[1])
        {
            count++;
        }
        if(count==n-1)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
}
