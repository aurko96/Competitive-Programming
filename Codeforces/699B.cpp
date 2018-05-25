#include<bits/stdc++.h>
using namespace std;
int a[1000006],b[10000006];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m,n,i,j,x=0,y=0,count=0,flag=0;
    string s[1005];
    int p=0,q=0,r=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s[i][j]=='*')
            {
                a[i]=a[i]+1;
                b[j]=b[j]+1;
                count++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>p)
        {
            p=a[i];
            x=i;
        }
    }
    for(j=0;j<m;j++)
    {
        if(b[j]>q)
        {
            q=b[j];
            y=j;
        }
    }
    r=min(m,n);
    for(i=0;i<r;i++)
    {
        if(a[i]!=0 && b[i]!=0)
        {
            flag++;
        }
    }
//    cout<<flag<<endl;
    if(p==count || q==count || p+q>=count)
    {
        cout<<"YES"<<'\n';
        cout<<x+1<<" "<<y+1<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
    }
    return 0;
}
