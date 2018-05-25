#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i,x,j,y=0,z,count=0,flag=0;
    string s;
    int n;
    cin>>s;
    //n=s.size();
    for(i=s.size()-1,j=1;i>=0;i--,j=j*10)
    {
        count++;
        if(s[i]=='e')
        {
            //s.erase(s.end()-1);
            break;
        }
        x=s[i]-48;
        y=y+(x*j);
        //s.erase(s.end()-1);
        //cout<<y<<endl<<count<<endl;
    }
    s.erase(s.end()-count,s.end());
    for(i=2;i<s.size();i++)
    {
        flag++;
    }
    //cout<<count<<endl;
    if(y>0 && y<=flag)
    {
        s.erase(s.begin()+1);
        s.insert(s.begin()+y+1,'.');
    }
    else if(y>0)
    {
        s.erase(s.begin());
    }
    n=s.size();
    //cout<<n<<endl;
    if(s[n-1]=='.')
    {
        s.erase(s.end()-1);

    }
    //cout<<s;
    if(y>flag)
    {
        z=y-flag;
        for(i=1;i<=z;i++)
        {
            s.push_back('0');
        }
    }
    if(s[0]=='0' && s[1]!='.')
    {
        for(i=0;;i++)
        {
            //cout<<'p'<<endl;
            s.erase(s.begin());
            if(s[i]=='0' && s[i+1]=='.')
            {
                s.erase(s.begin());
                //cout<<'r'<<endl;
                break;
            }
            if(s[i]!='0')
            {
                s.erase(s.begin());
                //cout<<'s'<<endl;
                break;
            }
            else
            {
                //cout<<'k'<<endl;
                s.erase(s.begin());
            }
        }
    }
    cout<<s;
    cout<<endl;
    //main();
}
