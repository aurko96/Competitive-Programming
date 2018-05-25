#include<bits/stdc++.h>
using namespace std;
int x,d,ara[100000];
int calc(int index)
{
    int val=ara[index];
    int sum=0;
    for(int i=0;i<x;i++)
    {
        int diff=abs(ara[i]-ara[index]);
        sum+=diff;
    }
    sum/=d;
    return sum;
}
int main()
{
    int n,m;
    cin>>n>>m>>d;
    x=n*m;
    bool flag=0;
    for(int i=0;i<x;i++)
    {
        cin>>ara[i];
        if(i!=0)
        {
            if((ara[0]-ara[i])%d!=0) flag=1;
        }
    }
    if(flag){ cout<<-1; return 0;}
    sort(ara,ara+x);
    int low=0,high=x-1,diff,mid1,mid2,ans;
    while(low+3<=high)
    {
        diff=(high-low)/3;
        mid1=low+diff;
        mid2=mid1+diff;
        int x,y;
        x=calc(mid1);
        y=calc(mid2);
        if(x<y)
        {
            ans=x;
            high=mid2;
        }
        else if(x>y)
        {
            ans=y;
            low=mid1;
        }
        else
        {
            ans=x;
            break;
        }
    }
    cout<<ans<<endl;
}
