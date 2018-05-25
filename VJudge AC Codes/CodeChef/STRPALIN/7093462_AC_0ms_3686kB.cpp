#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
    string s1,s2,s3,s4;
    int i,j,t,n,x,y,z;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>s1>>s2;
        int flag=0;
        memset(a,0,sizeof(a));
        for(j=0;j<s1.size();j++)
        {
          x=s1[j];
          a[x]=1;
        }
        for(j=0;j<s2.size();j++)
        {
            if(a[s2[j]]==1)
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}
