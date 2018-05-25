#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        bool flag=0;
        cin>>n;
        int ara[1000];
        for(int j=0;j<n;j++) cin>>ara[j];
        if(n%2==0) {cout<<"no\n"; continue; }
        else
        {
            for(int j=0,k=0;j<n;j++)
            {
                if(j<=n/2)
                {
                    k++;
                    if(ara[j]!=k) flag=1;
                }
                else if(j>n/2)
                {
                    k--;
                    if(ara[j]!=k) flag=1;
                }
                if(flag) break;
            }
            if(flag) cout<<"no\n";
            else cout<<"yes\n";
        }
    }
}
