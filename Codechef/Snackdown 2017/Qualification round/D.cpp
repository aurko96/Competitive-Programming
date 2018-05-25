#include<bits/stdc++.h>
#define LL long long
#define de cout<<"Debug"
using namespace std;
int main()
{
    LL x1,x2,y1,y2,x3,y3,x4,y4,i,j,n,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        bool flag=0;
        cin>>x1>>y1>>x2>>y2;
        cin>>x3>>y3>>x4>>y4;

        if(x3==x4 && y3==y4)
        {
            if(x1==x3 && x2==x4 && y1==y3 && y2==y4) flag=1;
        }
        else if(x1==x2 && y1==y2)
        {
           if(x1==x3 && x2==x4 && y1==y3 && y2==y4) flag=1;
        }
        else if(y3==y4)
        {
            if(y1==y2 && y1==y3)
            {
                if(x3<=x1 || x3<=x2 || x4<=x1 || x4<=x2)
                {
                    if(x3<x1 && x3<x2 && x4<x1 && x4<x2)flag=0;
                    else flag=1;
                   // de<<1<<endl;
                }
            }
            else if(x1==x2)
            {
                if((y1==y3 && x1==x3) || (y1==y4 && x1==x4) || (y2==y3 && x2==x3) || (y2==y4&&x2==x4))
                {
                    //de<<2<<endl;
                    flag=1;
                }
            }
        }
        else if(x3==x4)
        {
            if(x1==x2 && x1==x3)
            {
                if(y3<=y1 || y3<=y2 || y4<=y1 || y4<=y2)
                {
                    if(y3<y1 && y3<y2 && y4<y1 && y4<y2) flag=0;
                    else flag=1;
                    //de<<3<<endl;
                }
            }
            else if(y1==y2)
            {
                if((y1==y3 && x1==x3) || (y1==y4 && x1==x4) || (y2==y3 && x2==x3) || (y2==y4&&x2==x4))
                {
                    //de<<2<<endl;
                    flag=1;
                }
            }
        }
        if(flag) cout<<"yes\n";
        else cout<<"no\n";
    }
}
