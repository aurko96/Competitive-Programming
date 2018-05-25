#include<bits/stdc++.h>
int tri(double x1,double y1,double x2,double y2,double x3,double y3);
double dis(double x1,double y1,double x2,double y2);
using namespace std;
int main()
{
    double x1,y1,x2,y2,x3,y3,n,a,b,c,d,e,f,g,h,i,j,k,l,m;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    a=tri(x1,y1,x2,y2,x3,y3);

    if(a)
    {
        cout<<"RIGHT";
    }
    else if(tri(x1+1,y1,x2,y2,x3,y3))
    {
        cout<<"ALMOST";
    }
    else if(tri(x1,y1+1,x2,y2,x3,y3))
    {
        cout<<"ALMOST";
    }
    else if(tri(x1,y1,x2+1,y2,x3,y3))
    {
        cout<<"ALMOST";
    }
    else if(tri(x1,y1,x2,y2+1,x3,y3))
    {
        cout<<"ALMOST";
    }
    else if(tri(x1,y1,x2,y2,x3+1,y3))
    {
        cout<<"ALMOST";
    }
    else if(tri(x1,y1,x2,y2,x3,y3+1))
    {
        cout<<"ALMOST";
    }
    else if(tri(x1-1,y1,x2,y2,x3,y3))
    {
        cout<<"ALMOST";
    }
    else if(tri(x1,y1-1,x2,y2,x3,y3))
    {
        cout<<"ALMOST";
    }
    else if(tri(x1,y1,x2-1,y2,x3,y3))
    {
        cout<<"ALMOST";
    }
    else if(tri(x1,y1,x2,y2-1,x3,y3))
    {
        cout<<"ALMOST";
    }
    else if(tri(x1,y1,x2,y2,x3-1,y3))
    {
        cout<<"ALMOST";
    }
    else if(tri(x1,y1,x2,y2,x3,y3-1))
    {
        cout<<"ALMOST";
    }
    else
    {
        cout<<"NEITHER";
    }
    return 0;

}
double dis(double x1,double y1,double x2,double y2)
{
    double p=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    return p;
}
int tri(double x1,double y1,double x2,double y2,double x3,double y3)
{
    double p,q,r;
    p=dis(x1,y1,x2,y2);
    q=dis(x2,y2,x3,y3);
    r=dis(x1,y1,x3,y3);
    if(r>p&&r>q)
    {
        if(p+q==r)
        {
            return 1;
        }
        else return 0;
    }
    else if(p>q&&p>r)
    {
        if(q+r==p)
        {
            return 1;
        }
        else return 0;
    }
    else if(q>p&&q>r)
    {
        if(p+r==q)
        {
            return 1;
        }
        else return 0;
    }
    else
    {
        return 0;
    }
}
