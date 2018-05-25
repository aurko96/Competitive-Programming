// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    LL x1,x2,x3,y1,y2,y3,i,j,n,x,xx,yy,y,p,q,z,p1,q1;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    LL px,py,px1,py1,xx2,yy2,xx3,yy3;
    LL abx,aby;
    x=(x1-x2);
    y=(y1-y2);
    /*p=abs(x1);
    p1=abs(x2);
    q=abs(y1);
    q1=abs(y2);
    abx=abs(p-p1);
    aby=abs(q-q1);*/
    xx=(x3+x);
    yy=(y3+y);
    px=(x2-x3);
    xx2=(px+x1);
    py=(y2-y3);
    yy2=(py+y1);
    px1=(x3-x1);
    xx3=(px1+x2);
    py1=(y3-y1);
    yy3=(py1+y2);
    //cout<<abx<<" "<<aby<<"\n";
    cout<<3<<"\n";
    cout<<xx<<" "<<yy<<"\n"<<xx2<<" "<<yy2<<"\n"<<xx3<<" "<<yy3;
}
