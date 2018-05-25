#include<bits/stdc++.h>
#define debug cout<<'d'
using namespace std;
int main()
{
    int i,j,n,x,y,z=2,a[200],b=200,p=0,c=0,d;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        x=a[i+1]-a[i];
        b=min(b,x);
        c=max(c,x);
    }
    cout<<b<<endl;
    if(b==0 || b>a[0])
    {
        debug<<1<<endl;
        cout<<a[0]*n<<endl;
        return 0;
    }
    d=min((a[0]-b),(a[0]-c));
    cout<<"d="<<d<<endl;
    /*if(d<=0)
    {
        d=b;
    }*/
    if(d<a[0])
    {
        for(;;)
        {
            y=b;
            cout<<"y="<<y<<endl;
            debug<<2<<endl;
            d=a[0]-d;
            cout<<"d="<<d<<endl;
            if(d>=y)
            {
                d=y;
            }
            cout<<"b="<<b<<endl;
            if(d<=y)
            {
                debug<<4<<endl;
                z=2;
                while(1)
                {
                    debug<<5<<endl;
                    d=y-d;
                    if(d>=1)
                    {
                        debug<<6<<endl;
                        p=1;
                        break;
                    }
                }
                if(p==1)
                {
                    break;
                }
            }
        }
        cout<<d*n<<endl;
    }
    else
    {
        debug<<3<<endl;
        cout<<b*n<<endl;
    }
    main();
}

