#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b[200];
    int i,j,n,x,y,z,m,p,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        //b[200].clear();
        //memset(b,'0',sizeof(b));
        b[0]="http://www.lightoj.com/";
        j=0;
        z=0;
        cout<<"Case "<<i<<":"<<endl;
        while(1)
        {
            cin>>a;
            if(a[0]=='V')
            {
                cin>>b[++j];
                z=j;
                cout<<b[j]<<endl;
            }
            else if(a[0]=='B')
            {
                if(j==0)
                {
                    j=0;
                    cout<<"Ignored"<<endl;
                    continue;
                }
                cout<<b[--j]<<endl;
            }
            else if(a[0]=='F')
            {
                ++j;
                if(j>z)
                {
                    --j;
                    cout<<"Ignored"<<endl;
                    continue;
                }
                cout<<b[j]<<endl;
            }
            else if(a[0]=='Q')
            {
                break;
            }
        }

    }
}
