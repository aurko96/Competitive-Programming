#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,n,x=0,y=0,z,p,q;
    cin>>s;
    int count=0,flag=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            x=max(x,count);
            count=0;
            flag=0;
            for(j=i+1;;j++)
            {
                if((s[j]>=65 && s[j]<=90) || (s[j]>=97 && s[j]<=122))
                {
                    flag=1;

                }
                else if(s[j]=='_')
                {
                    y=y+flag;
                    flag=0;
                   // cout<<y<<endl;
                }
                if(s[j]==')')
                {
                    y=y+flag;
                    break;
                }
            }
            i=j;
            //cout<<i<<endl;
        }
        if(s[i]=='_')
        {
            x=max(x,count);
            count=0;
        }
        else if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
        {
            count++;
        }
    }
    x=max(x,count);
    cout<<x<<" "<<y<<"\n";
}
