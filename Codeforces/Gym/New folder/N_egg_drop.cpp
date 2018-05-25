#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x,y,z=1,ara[101],p,q;
    cin>>n>>x;
    string str;
    q=x;
    for(i=0;i<n;i++)
    {
        cin>>y>>str;
        if(str=="SAFE")
        {
            z=max(z,y);
            //p=z+1;
        }
        if(str=="BROKEN")
        {
            q=min(q,y);
            //j=q-1;
        }
    }
    cout<<z+1<<" "<<q-1<<endl;
    //main();
}
