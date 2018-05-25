#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,x,y,z,count=0,flag=0;
    char a,b,c;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>a>>x;
        if(a=='+')
        {
            m=m+x;
        }
        else if(a=='-')
        {
            m=m-x;
            if(m<0)
            {
                m=m+x;
                count++;
            }
        }
    }
    cout<<m<<" "<<count;
}
