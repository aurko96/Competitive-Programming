#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x,y=-1,z,start,stop,flag=0;;
    cin>>n>>x;
    string str;
    cin>>str;
    for(i=0;i<n;i++)
    {
        if(str[i]=='G') y=i;
        if(str[i]=='T') z=i;
    }
    if(abs(y-z)%x!=0)
    {
        cout<<"NO";
        return 0;
    }
    stop=max(y,z);
    start=min(y,z);
    for(i=start;i<=stop;i++)
    {
        if(str[i]=='#')
        {
            if(abs(y-i)%x==0)
            {
                flag=1;
            }
        }
    }
    if(flag) cout<<"NO";
    else cout<<"YES";
}
