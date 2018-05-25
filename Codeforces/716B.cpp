#include<bits/stdc++.h>
using namespace std;
int a[10000],b[10000];
int main()
{
    string s;
    int i,j,n,x,y=0,z,count=0,flag=0,count2=0;
    char ch;
    cin>>s;
    n=s.size();
    if(n<26)
    {
        cout<<-1;
        return 0;
    }
    for(i=0;i<n;i++)
    {
        x=s[i];
        if(x>=65 && x<=90 && i<=25+y)
        {
            a[x]++;
        }
        else if(x==63 && i<=25+y)
        {
            count++;
            cout<<"i= "<<i<<endl;
        }
        if(a[x]>1 && i<=25+y)
        {
            y=i;
            count=0;
            if(s[y-1]=='?')
            {
                y=y-1;
                i=i-2;
            }
            else
            {
                i=i-1;
            }
            cout<<y<<endl;
            memset(a,0,sizeof(a));
        }
    }
    for(i=65,j=0;i<=90;i++)
    {
        if(a[i]==0)
        {
            b[j++]=i;
            flag++;
        }
    }
    cout<<flag<<" "<<count<<endl;
    if(flag!=count)
    {
        cout<<-1;
    }
    else
    {
        for(i=y,j=0;i<=25+y;i++)
        {
            if(s[i]=='?')
            {
                ch=b[j];
                s[i]=ch;
                j++;
            }
        }
        for(i=0;i<n;i++)
        {
            if(s[i]=='?')
            {
                s[i]='A';
            }
        }
        cout<<s;
    }

}
