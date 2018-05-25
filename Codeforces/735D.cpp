#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,k,x,y,z,m,t,p,q,count,mx=0;
        cin>>x;
        q=n=0;
       m=sqrt(x);
            for(j=1,count=0;j<=m;j++)
            {
                if(i%j==0)
                {
                    cout<<j<<endl;
                    mx=max(mx,j);
                    count+=2;
                    if(i/j==j) count--;
                }
            }
            if(count>n)
            {
                q=i;
                n=count;
            }
        cout<<mx<<endl;
}

