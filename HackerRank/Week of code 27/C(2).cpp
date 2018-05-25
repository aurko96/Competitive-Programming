#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
bool ara[2005][2005],ara2[2005][2005],ara3[2005][2005],ara4[2005][2005];
int main()
{
    FastRead
    LL i,j,n,x,y,z,t,k,p,q,r,s;
    cin>>n>>t;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            x=((i*j)*(i*j));
            if(x%7==0) ara[i][j]=0;
            else if(x%7==1) ara[i][j]=0;
            else if(x%7==2) ara[i][j]=1;
            else if(x%7==3) ara[i][j]=0;
            else if(x%7==4) ara[i][j]=1;
            else if(x%7==5) ara[i][j]=1;
            else if(x%7==6) ara[i][j]=0;
        }
    }
    LL sum1,sum2,sum3;
    sum1=sum2=sum3=0;
    for(i=1,p=n;i<=n,p>=1;i++,p--)
    {
        for(j=1,q=n;j<=n,q>=1;j++,q--)
        {
            ara2[i][j]=ara[q][i];
            ara3[i][j]=ara[p][q];
            ara4[i][j]=ara[j][p];
            if(ara2[i][j]!=ara[i][j]) sum1+=1;
            if(ara3[i][j]!=ara[i][j]) sum2+=1;
            if(ara4[i][j]!=ara[i][j]) sum3+=1;
        }
    }
    for(i=1;i<=t;i++)
    {
        cin>>y;
        z=y/90;
        if(z%4==0) cout<<0<<"\n";
        else if(z%4==1) cout<<sum1<<"\n";
        else if(z%4==2) cout<<sum2<<"\n";
        else if(z%4==3) cout<<sum3<<"\n";
    }
}
