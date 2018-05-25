#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,i,j,n,count=0;
    cin>>a>>b>>c;
    for(i=b,j=c;;i++,j--)
    {
        if(i==b)
        {
            j=a-1-i;
            if(j>c)
            {
                n=j-c;
                i=i+n;
                j=c;

            }
        }
        x=i+j;
        if(x==(a-1))
        {
            count++;
        }
        if(j<=0)
        {
            break;
        }
    }
    cout<<count;
}
