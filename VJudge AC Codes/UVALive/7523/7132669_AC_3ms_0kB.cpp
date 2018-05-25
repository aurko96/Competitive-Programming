#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i,j,t,n,x,y,z,p,q;
    cin>>t;
    for(i=0;i<t;i++)
    {
        str.clear();
        cin>>str;
        x=y=z=p=0;
        if(str.size()!=8)
        {
            continue;
        }
        if(str[0]==str[1])
        {
            if((str[0]>=49 && str[0]<=57) && (str[1]>=49 && str[1]<=57))
            {
                x=1;
            }
        }
        if((str[2]>=49 && str[0]<=57) && (str[3]>=49 && str[1]<=57))
        {
            y=1;
        }
        if(str[4]>=65 && str[4]<=90)
        {
            z=1;
        }
        if((str[5]>=49 && str[5]<=57) && (str[6]>=49 && str[6]<=57) && (str[7]>=49 && str[7]<=57))
        {
            p=1;
        }
        if(x==1 && y==1 && z==1 && p==1)
        {
            cout<<str<<"\n";
        }

    }
}
