#include<bits/stdc++.h>
using namespace std;
int b[5];
int main()
{
    vector<char>vect;
    int i,j,n,x,y,z;
    n=6;
    char ch;
    y=0;
    int zz=0;
    int cnt=0;
    for(i=1;i<=n;i++)
    {
        cin>>ch;
        if(ch=='W' || ch=='N')
        {
            vect.push_back(ch);
            ++n;
        }
        else if(ch=='O')
        {
            vect.push_back(ch);
            cnt++;
            if(cnt==2) break;
        }
        else
        {
            vect.push_back(ch);
        }

    }
    int p=-1,q=-1,r=-1;
    cnt=0;
    for(i=0;i<vect.size();i++)
    {
        if(vect[i]>='0' && vect[i]<='9')
        {
            if(y==0)
            {
                b[y]+=(vect[i]-48);
                z=vect[i]-48;
                if(z%2!=0)
                {
                    if(q!=-1) y=2;
                    else y=1;
                }
            }
            else if(y==1)
            {
               b[y]+=(vect[i]-48);
               z=vect[i]-48;
               if(z%2!=0)
               {
                if(p!=-1) y=2;
                else y=0;
               }

            }
            else
            {
                b[y]+=(vect[i]-48);
               z=vect[i]-48;
               if(z%2!=0)
               {
                if(p!=-1) y=1;
                else y=0;
               }
            }
        }
        else if(vect[i]=='O')
        {
            cnt++;
            if(cnt==2) break;
            if(y==0)
            {
                p=b[0];
                y=2;
            }
            else if(y==1)
            {
                q=b[1];
                y=2;
            }
            else if(y==2) r=b[2];
        }
    }
    p=b[0];
    q=b[1];
    r=b[2];
    cout<<p<<"\n"<<q<<"\n"<<r<<"\n";
}
