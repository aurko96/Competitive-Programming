#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,n,m,x,y,z,mn,sum=0,count;
    cin>>x>>y;
    for(i=x;i<=y;i++)
    {
        LL cnt2=0;
        n=i;
        while(cnt2!=1)
        {
            if(n==1) cnt2++;
            mn=2e14;
            m=sqrt(n);
            for(j=1,count=0;j<=m;j++)
            {
                if(n%j==0)
                {
                    if(j<mn && j!=1) mn=j;
                    count+=2;
                    if(n/j==j) count--;
                }
            }
            //cout<<n<<" "<<count<<" "<<sum<<endl;
            if(mn==2e14) mn=1;
            if(n==i)
            {
                //cout<<"numb = "<<n<<" "<<count<<endl;
                count--;
            }
            //cout<<mn<<endl;
            sum+=count;
            if(n%mn==0) z=n/mn;
            else z=mn;
            //cout<<"z = "<<z<<endl;
            if(z==n) n=1;
            else if(z>mn) n=z;
            else n=mn;
            //cout<<sum<<" "<<n<<endl;
        }
        //sum++;

    }
    cout<<sum<<"\n";
}
