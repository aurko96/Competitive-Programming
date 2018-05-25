#include<bits/stdc++.h>
using namespace std;
int ara[200][200];
vector<string>vv;
string str,str2;
int n,m;
void execute(char ch,int loc,int val)
{
    str.clear();
    str2.clear();
    if(ch=='r')
    {
        for(int i=0;i<m;i++)
        {
            ara[loc][i]-=val;
        }
        ostringstream oss;
        oss<<(loc+1);
        str=oss.str();
        str2+="row ";
        str2+=str;
        for(int i=0;i<val;i++)
        {
            vv.push_back(str2);
        }
    }
    else if(ch=='c')
    {
        for(int i=0;i<n;i++)
        {
            ara[i][loc]-=val;
        }
        ostringstream oss;
        oss<<(loc+1);
        str=oss.str();
        str2+="col ";
        str2+=str;
        for(int i=0;i<val;i++)
        {
            vv.push_back(str2);
        }
    }
}
void scan_row()
{
    int mn=1000;
    for(int i=0;i<n;i++)
    {
        mn=1000;
        for(int j=0;j<m;j++)
        {
            mn=min(mn,ara[i][j]);
        }
        execute('r',i,mn);
    }
}
void scan_col()
{
    int mn=1000;
    for(int i=0;i<m;i++)
    {
        mn=1000;
        for(int j=0;j<n;j++)
        {
            mn=min(mn,ara[j][i]);
        }
        execute('c',i,mn);
    }
}
bool check()
{
    bool flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ara[i][j]!=0) flag=1;
        }
    }
    return flag;
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) cin>>ara[i][j];
    }
    if(n>=m)
    {
        scan_col();
        scan_row();
    }
    else
    {
        scan_row();
        scan_col();
    }
    int x;
    x=check();
    if(x==0)
    {
        cout<<vv.size()<<"\n";
        for(int i=0;i<vv.size();i++)
        {
            cout<<vv[i]<<"\n";
        }
    }
    else cout<<-1<<"\n";
}
