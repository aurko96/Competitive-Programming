#include<bits/stdc++.h>
#define debug cout<<"debug"
using namespace std;
long long x[2000],c[2000],ld,rd;
int main()
{
    long long a[505][505],b,i,j,n,y,z,p,flag=0,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
            x[i]=x[i]+a[i][j];
            c[j]=c[j]+a[i][j];
            if(a[i][j]==0)
            {
                y=i;
                p=j;
            }
        }
    }
//    for(i=0;i<n;i++)
//    {
//        cout<<c[i]<<" ";
//    }
    if(n==1)
    {
        cout<<1;
        return 0;
    }

    for(i=0,j=1;j<n;j++)
    {
        //cout<<i<<" "<<j<<endl;
        if(i==y)
        {
            i++;
            continue;
        }
        if(j==y)
        {
            continue;
        }
        if(x[i]!=x[j])
        {
            flag=1;
        }
    }

    if(flag)
    {
        cout<<-1<<"\n";
    }
    else
    {
        if(y==n-1)
        {
            z=x[y-1]-x[y];
        }
        else
        {
            z=x[y+1]-x[y];
        }

        if(z<=0)
        {
            cout<<-1<<"\n";
        }
        else
        {
            a[y][p]=z;
            x[y]=x[y]+a[y][p];
            c[p]=c[p]+a[y][p];
            for(i=n-1,j=0;i>=0,j<n;i--,j++)
            {
                rd=rd+a[i][j];
            }
            for(i=0,j=1;j<n;j++)
            {
                //cout<<c[i]<<" "<<c[j]<<endl;
                if(c[i]!=c[j])
                {
                    count=1;
                }
            }
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(i==j)
                    {
                        ld=ld+a[i][j];
                    }
                }
            }
            //cout<<ld<<" "<<rd<<endl;
            if(count)
            {
               // debug<<1<<endl;
                cout<<-1<<"\n";
            }
            else if(ld!=rd)
            {
                //debug<<2<<endl;
                cout<<-1<<"\n";
            }
            else
            {
                cout<<z<<"\n";
            }
        }
    }

}
