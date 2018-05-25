#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a,b,c;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(a%2==0)
        {
            b=a/2;
            c=a/2;
        }
        else
        {
            b=a/2;
            c=(a/2)+1;
        }
        cout<<b<<" "<<c<<endl;
    }
}
