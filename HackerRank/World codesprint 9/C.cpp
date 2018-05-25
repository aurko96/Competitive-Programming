#include<bits/stdc++.h>
#define LL long long
#define de cout<<"debug"
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
map<LL,int>mp[100005];
int main()
{
    LL i,j,n,m,x,y,z=0;
    cin>>n>>m;
    cin>>x>>y;
    LL p,q;
    for(i=0;i<m;i++)
    {
        cin>>p>>q;
        mp[p][q]=1;
    }
    for(i=x+1,j=y;;i++)
    {
        if(i==0 || j==0 || i>n || j>n) break;
        if(mp[i][j]==1) break;
        else z++;
        //de<<1<<endl;
    }
    for(i=x,j=y+1;;j++)
    {
        if(i==0 || j==0 || i>n || j>n) break;
        if(mp[i][j]==1) break;
        else z++;
        //de<<2<<endl;
    }
    for(i=x+1,j=y+1;;i++,j++)
    {
        if(i==0 || j==0 || i>n || j>n) break;
        if(mp[i][j]==1) break;
        else z++;
        //de<<3<<endl;
    }
    for(i=x-1,j=y+1;;i--,j++)
    {
        if(i==0 || j==0 || i>n || j>n) break;
        if(mp[i][j]==1) break;
        else z++;
        //de<<4<<endl;
    }
    for(i=x-1,j=y;;i--)
    {
        if(i==0 || j==0 || i>n || j>n) break;
        if(mp[i][j]==1) break;
        else z++;
        //de<<5<<endl;
    }
    for(i=x-1,j=y-1;;i--,j--)
    {
        if(i==0 || j==0 || i>n || j>n) break;
        if(mp[i][j]==1) break;
        else z++;
        //de<<6<<endl;
    }
    for(i=x,j=y-1;;j--)
    {
        if(i==0 || j==0 || i>n || j>n) break;
        if(mp[i][j]==1) break;
        else z++;
        //de<<7<<endl;
    }
    for(i=x+1,j=y-1;;i++,j--)
    {
        if(i==0 || j==0 || i>n || j>n) break;
        if(mp[i][j]==1) break;
        else z++;
        //de<<8<<endl;
    }
    cout<<z<<"\n";
}
