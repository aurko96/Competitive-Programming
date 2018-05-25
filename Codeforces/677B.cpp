#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[100005],i,j=0,n,x=0,y,z,b,c;
    cin>>n>>b>>c;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;;)
    {
        x=x+a[i];
        cout<<"x 1 = "<<x<<endl;
        if(x>b || i==n-1)
        {
            if(i==n-1)
            {
                for(;;)
                {


                    if(x<=0)
                    {
                        break;
                    }
                    j++;
                    x=x-c;
                    cout<<"x 4 = "<<x<<endl;
                }
                break;
            }
            if(i<n || x!=b)
            {
                x=x-a[i];
                i--;

            }
            cout<<"x 2 = "<<x<<endl;
            j++;
            x=x-c;
            cout<<"i 2 = "<<i<<endl;


            cout<<"i = "<<i<<endl;
            cout<<"x 3 = "<<x<<endl<<"j="<<j<<endl;
            if(x<0)
            {
                x=0;
            }
        }
        i++;
        //j++;
        //cout<<"j2="<<j<<endl;
    }
    cout<<j;
}
