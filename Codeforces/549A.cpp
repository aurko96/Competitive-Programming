#include<bits/stdc++.h>
using namespace std;
int detect(char c);
int main()
{
    int i,j,n,m,x,count=0;
    cin>>n>>m;
    string a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<m-1;j++)
        {
            set<char>s;
            if(detect(a[i][j]))
            {
                s.insert(a[i][j]);
            }
            if(detect(a[i][j+1]))
            {
                s.insert(a[i][j+1]);
            }
            if(detect(a[i+1][j]))
            {
                s.insert(a[i+1][j]);
            }
            if(detect(a[i+1][j+1]))
            {
                s.insert(a[i+1][j+1]);
            }
            x=s.size();
            if(x==4)
            {
                count++;
            }
        }
    }
    cout<<count;
}
int detect(char c)
{
    if(c=='f'||c=='a'||c=='c'||c=='e')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
