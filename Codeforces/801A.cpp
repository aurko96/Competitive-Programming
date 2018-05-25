// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i,j,n,x=0,y,z,cnt=0,cnt2=0,flag=0;
    /*for(i=0;i<str.size()-1;i++)
    {
        if(str[i]=='V' && str[i+1]=='K')
        {
            cnt2++;
            i++;
        }
    }*/
    for(i=0;i<str.size()-1;i++)
    {
        if(str[i]=='V' && str[i+1]=='K')
        {
            if(flag)
            {
                x--;
                flag=0;
            }
            cnt++;
            i++;
        }
        else if(str[i]=='V' && str[i+1]=='V'){ x++; flag=1;}
        //else if(str[i]=='K' && str[i+1]=='V') x++;
        else if(str[i]=='K' && str[i+1]=='K'){ x++; flag=1;}
        else flag=0;
    }
   // cout<<cnt<<" "<<x<<endl;
   int mx=0;
    if(x>0)
    {
        y=cnt+1;
        //mx=max(cnt2,y);
        cout<<y<<"\n";
    }
    else
    {
        //mx=max(cnt2,cnt);
        cout<<cnt<<"\n";
    }
}
