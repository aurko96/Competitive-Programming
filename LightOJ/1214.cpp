#include<bits/stdc++.h>
using namespace std;
int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
    long long i,j,n,b,c,x,y;
    cin>>n;
    string a;
    for(i=1;i<=n;i++)
    {
        cin>>a>>x;
        x=abs(x);
        //cout<<x<<endl;
        unsigned long long rem=0;
        if(a[0]=='-')
        {
            a.erase(a.begin());
        }
        //cout<<a<<endl;
        for(j=0;j<a.size();j++)
        {
            y=a[j]-48;
            rem=rem*10+y;
            rem=rem%x;
        }
        if(rem==0)
        {
            cout<<"Case "<<i<<": divisible"<<'\n';

        }
        else
        {
            cout<<"Case "<<i<<": not divisible"<<'\n';

        }
    }
}
