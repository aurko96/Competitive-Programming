#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,n,x,y=0,z,p,flag=0,pole=-1;
    string str;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>str;
        z=x/20000;
        p=x%20000;
        if(i==0 && str!="South") flag=1;
        if(str=="South")
        {
            /*if(pole==0) flag=1;
            if(p==0){ if(z%2!=0) y+=20000; }
            else y+=p;
            if(y==20000) pole=0;
            else if(y==0) pole=1;
            else pole=-1;*/

            y+=x;
        }
        else if(str=="North")
        {
            /*if(pole==1) flag=1;
            if(p==0){ if(z%2!=0) y-=20000; }
            else y-=p;
            if(y==0) pole=1;
            else if(y==20000) pole=0;
            else pole=-1;*/

            y-=x;
        }
        else if(str=="East")
        {
            if(abs(y)%20000==0) flag=1;
        }
        else if(str=="West")
        {
            if(abs(y)%20000==0) flag=1;
        }
        if(y<0 || y>20000) flag=1;
        //cout<<y<<" "<<pole<<endl;
    }
    if(y==0 && flag==0) cout<<"YES\n";
    else cout<<"NO\n";
}
