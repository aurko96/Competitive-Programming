#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("out.txt","w",stdout);
    for(int i=0;i<500;i++)
    {
        for(int j=0;j<500;j++)
        {
            if(i==0 && j==0) cout<<1000000<<" ";
            else cout<<1<<" ";
        }
        cout<<"\n";
    }
}
