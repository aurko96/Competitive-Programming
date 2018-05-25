#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],i,n,x=1,y,z;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(a[i]>=x)
        {
            x++;
        }
    }
    cout<<x<<endl;
    main();
}
