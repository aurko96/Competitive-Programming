#include<bits/stdc++.h>
using namespace std;
int main()
{
    //string a,b;
    bool a[45],b[45];
    long long i,j,k,p,q,n,t,x,y,z,count;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        j=0;
        count=0;
        y=0;
        z=1;
        //fill(a.begin(),a.end(),'0');
        //fill(b.begin(),b.end(),'0');
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        while(n)
        {
            if(n%2==0)
            {
                a[j]=0;
            }
            else
            {
                a[j]=1;
            }
            j++;
            n=n/2;
        }
        //a[j]='\0';
        x=0;
        //j=a.size();
        //cout<<"j="<<j<<endl;
        while(1)
        {
            if(a[x]==1 && a[x+1]==0)
            {
                //swap(a[x],a[x+1]);
                break;
            }
            else if(a[x]==1)
            {
                count++;
            }
            x++;
        }
        //cout<<"x="<<x<<endl;
        for(k=0;k<count;k++)
        {
            b[k]=1;
        }
//        for(k=count;k<x;k++)
//        {
//            b[k]=0;
//        }
        b[x+1]=1;
        for(k=x+2;k<=j+1;k++)
        {
            b[k]=a[k];
        }
        //cout<<"k="<<k<<endl<<"j="<<j<<endl;
        //b[j]='\0';
        //reverse(b.begin(),b.end());
        for(p=0;p<=j+1;p++,z=z*2)
        {
            y=y+(b[p]*z);
            //cout<<"y="<<y<<endl;
        }
        cout<<"Case "<<i<<": "<<y<<'\n';
    }
}
