#include<bits/stdc++.h>
#define de cout<<"debug"
using namespace std;
int leap_year(int n)
{
    if(n%400==0) return 1;
    if(n%100==0) return 0;
    if(n%4==0) return 1;
    return 0;
}
int main()
{
    int i,j,n,x,y,z;
    cin>>n;
    for(i=n,x=0;;i++)
    {
        if(x%7==0 && x>0)
        {
            y=leap_year(n);
            z=leap_year(i);
            if(y==z) break;
            else x=0;
        }
        if(leap_year(i)) x++;
        x++;
    }
    cout<<i<<endl;
}
