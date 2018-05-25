#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        str.clear();
        int h=0,t=0,flag=0;
        cin>>m;
        cin>>str;
        for(int j=0;j<m;j++)
        {
            if(str[j]=='H')
            {
                if(h==0) h=1;
                else flag=1;
            }
            else if(str[j]=='T')
            {
                if(h==1) h=0;
                else flag=1;
            }
            if(flag) break;
        }
        if(flag) cout<<"Invalid\n";
        else if(h>0) cout<<"Invalid\n";
        else cout<<"Valid\n";
    }
}
