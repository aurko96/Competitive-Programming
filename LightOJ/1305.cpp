#include <bits/stdc++.h>
using namespace std;

int main()
{
    double ax,ay,bx,by,cx,cy,dx,dy,area;
    double i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {                                   //found area by determinant
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        area = (ax*(by-cy)+bx*(cy-ay)+cx*(ay-by));
        dx=ax+cx-bx;
        dy=ay+cy-by;
        cout<<"Case "<<i<<": "<<dx<<" "<<dy<<" "<<(int)abs(area)<<endl;
    }
    return 0;
}
