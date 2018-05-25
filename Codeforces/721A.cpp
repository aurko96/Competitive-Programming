#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int i,j,k,n,x,y,z,count=0,flag=0;
    string s;
    cin>>n>>s;
    for(i=0,k=0;i<n;i++)
    {
        count=0;
        if(s[i]=='B')
        {
            flag++;
           for(j=i;j<n;j++)
           {
               if(s[j]!='B')
               {
                   break;
               }
               count++;
           }
           i=j-1;
           a[k++]=count;
        }
    }
    cout<<flag<<"\n";
    for(i=0;i<flag;i++)
    {
        cout<<a[i]<<" ";
    }
}
