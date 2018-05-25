#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k,x,y,z,m,t,p,count;
    int a[10000],b[10000];
    for(i=1;i<=32;i++)
    {
        a[i*i]=-1;
    }
    for(i=1;i<=1000;i++)
    {
        m=sqrt(i);
        for(j=1,count=0;j<=m;j++)
        {
            if(i%j==0) count++;
        }
        a[i]+=count*2;
    }
    k=2;
    b[1]=1;
    for(i=2;i<=32;i++)
    {
        for(j=1000; j>=2; j--)
        {
            if(a[j]==i)
            {
                b[k]=j;
                k++;
            }
        }
    }
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        cout<<"Case "<<i<<": "<<b[n]<<endl;
    }
}

