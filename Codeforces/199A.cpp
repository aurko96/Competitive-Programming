#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,k,fib[50];
    fib[0]=0;
    fib[1]=1;
    cin>>n;
    for(i=2;i<50;i++) fib[i]=fib[i-1]+fib[i-2];
    for(i=0;i<50;i++)
    {
        for(j=0;j<50;j++)
        {
            for(k=0;k<50;k++)
            {
                if((fib[i]+fib[j]+fib[k])==n)
                {
                    cout<<fib[i]<<" "<<fib[j]<<" "<<fib[k];
                    return 0;
                }
            }
        }
    }
}
