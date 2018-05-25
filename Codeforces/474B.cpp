#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,n,x,y,z;
    cin>>n;
    int ara[100005];
    for(i=1;i<=n;i++)
    {
        cin>>z;
        j+=z;
        ara[i]=j;
    }
    cin>>x;
    for(i=1;i<=x;i++)
    {
        cin>>y;
        int low=1,high=n,mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(y<=ara[mid] && y>ara[mid-1])
            {
                cout<<mid<<endl;
                break;
            }
            else if(y>ara[mid]) low=mid+1;
            else high=mid-1;
        }
    }
}
