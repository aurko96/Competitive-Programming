#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    double ox,oy,ax,ay,bx,by,A,B,C,ang,arc;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        A=sqrt(((ox-ax)*(ox-ax))+((oy-ay)*(oy-ay)));
        B=sqrt(((ox-bx)*(ox-bx))+((oy-by)*(oy-by)));
        C=sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));
        ang=acos(((A*A+B*B)-C*C)/(2*A*B));
        arc=ang*A;
        cout.precision(8);
        cout<<fixed<<"Case "<<i<<": "<<arc<<'\n';
    }
}

