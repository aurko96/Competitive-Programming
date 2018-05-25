#include<bits/stdc++.h>
#define LL long long
using namespace std;
int ara[10][10];
void keypad()
{
    ara[1][1]=1;
    ara[1][2]=2;
    ara[1][3]=3;
    ara[2][1]=4;
    ara[2][2]=5;
    ara[2][3]=6;
    ara[3][1]=7;
    ara[3][2]=8;
    ara[3][3]=9;
    ara[4][2]=0;
}
int searchless(int x)
{
    int y,z,ans,ans2;
    for(int j=x;j>=0;j--)
    {
    vector<int>vv;
        y=j;
        //cout<<y<<endl;
        while(y)
        {
            z=y%10;
            y/=10;
            vv.push_back(z);
        }
        reverse(vv.begin(),vv.end());
//        for(int tt=0;tt<vv.size();tt++) cout<<vv[tt];
//        cout<<endl;
        int r=-1,c=-1;
        bool flag2=0;
        for(int p=0;p<vv.size();p++)
        {
           // cout<<vv[p]<<endl;
            bool flag=0;
            for(int k=1;k<=4;k++)
            {
                for(int w=1;w<=3;w++)
                {
                    if(ara[k][w]==vv[p])
                    {
                        if(r==-1 && c==-1)
                        {
                            flag=1;
                            r=k;
                            c=w;
                            //cout<<"de1  "<<vv[p]<<" "<<r<<" "<<c<<endl;

                        }
                        else
                        {
                            flag=1;
                            if(k<r || w<c)
                            {
                                flag2=1;
                                //cout<<"de2  "<<vv[p]<<" "<<r<<" "<<c<<" "<<k<<" "<<w<<endl;
                            }
                            else
                            {
                                r=k;
                                c=w;
                               // cout<<"de3  "<<vv[p]<<" "<<r<<" "<<c<<endl;
                            }
                        }

                    }
                    if(flag) break;
                }
                if(flag) break;
            }
            if(flag2) break;
        }
        if(!flag2)
        {
            ans=j;
            return ans;
        }

    }
}
int searchmore(int x)
{
    int y,z,ans,ans2;
    for(int j=x;j<=1000;j++)
    {
    vector<int>vv;
        y=j;
        //cout<<y<<endl;
        while(y)
        {
            z=y%10;
            y/=10;
            vv.push_back(z);
        }
        reverse(vv.begin(),vv.end());
//        for(int tt=0;tt<vv.size();tt++) cout<<vv[tt];
//        cout<<endl;
        int r=-1,c=-1;
        bool flag2=0;
        for(int p=0;p<vv.size();p++)
        {
           // cout<<vv[p]<<endl;
            bool flag=0;
            for(int k=1;k<=4;k++)
            {
                for(int w=1;w<=3;w++)
                {
                    if(ara[k][w]==vv[p])
                    {
                        if(r==-1 && c==-1)
                        {
                            flag=1;
                            r=k;
                            c=w;
                            //cout<<"de1  "<<vv[p]<<" "<<r<<" "<<c<<endl;

                        }
                        else
                        {
                            flag=1;
                            if(k<r || w<c)
                            {
                                flag2=1;
                                //cout<<"de2  "<<vv[p]<<" "<<r<<" "<<c<<" "<<k<<" "<<w<<endl;
                            }
                            else
                            {
                                r=k;
                                c=w;
                               // cout<<"de3  "<<vv[p]<<" "<<r<<" "<<c<<endl;
                            }
                        }

                    }
                    if(flag) break;
                }
                if(flag) break;
            }
            if(flag2) break;
        }
        if(!flag2)
        {
            ans=j;
            return ans;
        }

    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        memset(ara,-1,sizeof(ara));
        keypad();
        vector<int>vv;
        int x,y,z;
        cin>>x;
        y=searchless(x);
        //cout<<y<<"\n";
        z=searchmore(x);
        //cout<<z<<endl;
        int mn,mn2;
        mn=x-y;
        mn2=z-x;
        if(mn<mn2) cout<<y<<"\n";
        else cout<<z<<"\n";
    }
}
