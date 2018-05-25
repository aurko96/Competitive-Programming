#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str[200];
    int a[10005],b[10005],i,j,k,n,x,y,z,count,flag=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    getchar();
    //fflush(stdin);
    for(i=0;i<n;i++)
    {
        getline(cin,str[i]);
    }
    for(i=0,k=0;i<n;i++)
    {
        count=0;
        for(j=0;j<str[i].size();j++)
        {
            if(str[i][j]=='a' ||str[i][j]=='e' ||str[i][j]=='i' ||str[i][j]=='o' ||str[i][j]=='u' ||str[i][j]=='y')
            {
                //cout<<str[i][j]<<endl;
               count++;
            }
        }
        //cout<<count<<endl;
        b[k++]=count;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            flag=1;
        }
    }
    if(flag) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
