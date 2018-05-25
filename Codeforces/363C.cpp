#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    string str,str2;
    int i,j,n,x,y,z,cnt=0;
    cin>>str;
    if(str.size()==1)
    {
        cout<<str<<"\n";
        return 0;
    }
    for(i=0;i<str.size();i++)
    {
        if(str[i]==str[i+1] && i<str.size()-1)
        {
            if(cnt==0)
            {
                str2+=str[i];
                str2+=str[i+1];
                cnt=1;
            }
            else if(cnt==1)
            {
                str2+=str[i];
                if(str[i]==str[i+1])
                {
                    for(j=i+1;j<str.size()-1;j++)
                    {
                        if(str[j]!=str[j+1]) break;
                    }
                    i=j;
                }
                cnt=0;
                //i++;
                continue;
            }
            if(i<str.size()-2)
            {
                if(str[i+1]!=str[i+2])
                {
                    cnt=0;
                    str2+=str[i+2];
                    for(j=i+2;j<str.size()-1;j++)
                    {
                        if(str[j]!=str[j+1]) break;
                    }
                    i=j;
                }
                else if(str[i+1]==str[i+2])
                {
                    for(j=i+2;j<str.size()-1;j++)
                    {
                        if(str[j]!=str[j+1]) break;
                    }
                    i=j;
                }
            }
           // if(cnt==0) cnt=1;
           // else if(cnt==1) cnt=0;
           // cout<<i<<endl;

        }
        else if(i<str.size()-1)
        {
            cnt=0;
            if(str[i]!=str[i+1]) str2+=str[i];
        }
        else if(i==str.size()-1)
        {
            cnt=0;
            x=str2.size();
            //cout<<x<<" "<<str[i]<<endl;
            if(str2[x-1]==str2[x-2])
            {
                if(str[i]==str2[x-1])
                {
                    //cout<<"hello\n";
                    continue;
                }
            //cout<<i<<endl;
            }
            str2+=str[i];
        }
       // cout<<str2<<" "<<cnt<<endl;
    }
    cout<<str2<<"\n";
}
