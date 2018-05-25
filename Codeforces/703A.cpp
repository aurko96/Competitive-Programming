#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,i,m=0,n,x,y,z;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x>y)
        {
            m++;
        }
        else if(x<y)
        {
            c++;
        }
    }
    if(m>c)
    {
        cout<<"Mishka"<<endl;
    }
    else if(m<c)
    {
        cout<<"Chris"<<endl;
    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
}
