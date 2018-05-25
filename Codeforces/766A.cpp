#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    string str,str2;
    LL i,j,m,n,x=0,y,z,count=0;
    cin>>str>>str2;
    n=str.size();
    m=str2.size();
    if(m>=n)
    {
        for(i=0,j=0;i<str2.size();i++)
        {
            if(str2[i]==str[j])
            {
                x=max(x,count);
                count=0;
                j++;
            }
            else
            {
                count++;
                //cout<<str2[i]<<endl;
            }
        }
        //x=m-count;
        x=max(x,count);
        if(x==0) cout<<-1;
        else cout<<x<<"\n";
    }
    else
    {
        for(i=0,j=0;i<str.size();i++)
        {
            if(str[i]==str2[j])
            {
                x=max(x,count);
                count=0;
                j++;
            }
            else count++;
        }
        //x=n-count;
        x=max(x,count);
        if(x==0) cout<<-1;
        else cout<<x<<"\n";
    }

}
