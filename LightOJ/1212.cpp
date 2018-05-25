#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>d;
    string a,b;
    int i,j,t,m,n,x,y,p;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>m>>n;
        p=0;
        cout<<"Case "<<i<<":"<<'\n';
        d.clear();
        for(j=1;j<=n;j++)
        {
            cin>>a;
            if(a[4]=='L'||a[4]=='R')
            {
                cin>>x;
            }
            p=d.size();
            if(a[4]=='L')
            {
                if(p==m)
                {
                    if(a[4]=='L' || a[4]=='R')
                    {
                        cout<<"The queue is full"<<'\n';
                        continue;
                    }
                }
                d.push_front(x);
                cout<<"Pushed in left: "<<x<<'\n';
            }
            else if(a[4]=='R')
            {
                if(p==m)
                {
                    if(a[4]=='L' || a[4]=='R')
                    {
                        cout<<"The queue is full"<<'\n';
                        continue;
                    }
                }
                d.push_back(x);
                cout<<"Pushed in right: "<<x<<'\n';
            }
            else if(a[3]=='L')
            {
                if(p==0)
                {
                    if(a[3]=='L' || a[3]=='R')
                    {
                        cout<<"The queue is empty"<<'\n';
                        continue;
                    }
                }
                cout<<"Popped from left: "<<d[0]<<'\n';
                d.pop_front();
            }
            else if(a[3]=='R')
            {
                if(p==0)
                {
                    if(a[3]=='L' || a[3]=='R')
                    {
                        cout<<"The queue is empty"<<'\n';
                        continue;
                    }
                }
                cout<<"Popped from right: "<<d[p-1]<<'\n';
                d.pop_back();
            }

        }
    }
}



/*1
3 8
pushLeft 1
pushLeft 2
pushRight -1
pushRight 1
popLeft
popRight
popLeft
popRight*/


/*2
4 4
pushLeft -100
popRight
popLeft
pushRight -100
4 4
popLeft
popRight
popLeft
popRight*/
