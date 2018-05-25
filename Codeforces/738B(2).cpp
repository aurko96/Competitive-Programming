#include<bits/stdc++.h>
using namespace std;
int n,m,ara[1005][1005];
int main()
{
    int i,j,x,y,z,count1=0,count2=0,flag1=0,flag2=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>ara[i][j];
        }
    }
    int p=0,q=0,r=0,s=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(j%2==0 && ara[i][j]==1) count1++;
            if(j%2!=0 && ara[i][j]==1) count2++;
            if(ara[i][j]==0) flag1++;
        }
        x=max(count1,count2);
        if(count1==0 && count2==0)
        {
            x=0;
            flag1=0;
        }
        //p+=x;
        y=flag1+(x-1);
        if(y<0) y=0;
        q+=y;
        x=y=count1=count2=flag1=0;
    }

    cout<<q<<endl;
    x=y=count1=count2=flag1=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<j<< " " <<i<<endl;
            if(j%2==0 && ara[j][i]==1) count1++;
            if(j%2!=0 && ara[j][i]==1) count2++;
            if(ara[j][i]==0) flag1++;
        }
        x=max(count1,count2);
        if(count1==0 && count2==0)
        {
            x=0;
            flag1=0;
        }
        //r+=x;
        y=flag1+(x-1);
        if(y<0) y=0;
        cout<<"y = "<<y<<endl;
        s+=y;
        x=y=count1=count2=flag1=0;
    }
    cout<<s<<endl;
    cout<<q+s<<endl;
}
