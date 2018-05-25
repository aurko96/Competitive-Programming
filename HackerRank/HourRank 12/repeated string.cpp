#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    string str;
    long long i,j,n,m,x,y,z,count=0,flag=0;
    cin>>str>>n;
    m=str.size();
    for(i=0;i<m;i++)
    {
        if(str[i]=='a')
        {
            count++;
        }
        if(i==n-1)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<count;
        return 0;
    }
    x=n/m;
    y=n%m;
    count=count*x;
    if(y)
    {
        for(i=0;i<y;i++)
        {
            if(str[i]=='a')
            {
                count++;
            }
        }
    }
    cout<<count;
}
