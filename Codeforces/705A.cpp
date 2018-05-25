#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x,y,z;
    string str[5],s;
    cin>>n;
    str[0]="I love ";
    str[1]="I hate ";
    str[2]="that ";
    str[3]="it";
    for(i=1;i<=n;i++)
    {
        x=i%2;
        s=s+str[x];
        if(i==n)
        {
            s=s+str[3];
        }
        else
        {
            s=s+str[2];
        }
    }
    cout<<s;
}
