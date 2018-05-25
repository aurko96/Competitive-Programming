#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    long long i,j,n,x,y,z=0,count=0;
    cin>>a>>b;
    x=a.size();
    y=b.size();
    for(i=1,j=0;i<=x;i++)
    {
        if(a[i-1]==b[j])
        {
            count++;
            j++;
            /*if(count==y)
            {
                //z=z+1;
                count=0;
            }*/
            if(j==y)
            {
                z=z+1;
                j=0;
            }
        }
        else
        {
            count=0;
            j=0;
        }
        //cout<<count<<endl;
    }
    //cout<<count<<endl;
    cout<<z;
}
