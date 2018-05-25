// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    LL i,j,n,x,y,z;
    string str;
    cin>>n>>str;
    deque<char>dq;
    for(i=0;i<str.size();i++)
    {
        if(i%2==0) dq.push_back(str[i]);
        else dq.push_front(str[i]);
    }
    if(n%2!=0)
    {
        for(i=0;i<dq.size();i++)
        {
            cout<<dq[i];
        }
    }
    else
    {
        for(i=dq.size()-1;i>=0;i--)
        {
            cout<<dq[i];
        }
    }
}
