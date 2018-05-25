#include<bits/stdc++.h>
using namespace std;
int ara[505][505],ara2[505][505];
int n,m;
int fx[]={0,1,-1,0,1,-1,1,-1};
int fy[]={1,0,0,-1,1,1,-1,-1};
void print()
{
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<m;k++) cout<<ara2[j][k]<<" ";
        cout<<endl;
    }
}
inline void convert()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ara[i][j]>ara2[i][j]) ara2[i][j]=ara[i][j];
            for(int k=0;k<8;k++)
            {
                if(i+fy[k]>=0 && i+fy[k]<n && j+fx[k]>=0 && j+fx[k]<m)
                {
                    if(ara[i+fy[k]][j+fx[k]]>ara[i][j])
                    {
                        ara2[i+fy[k]][j+fx[k]]=ara[i+fy[k]][j+fx[k]];
                    }
                    else
                    {
                        if(ara2[i+fy[k]][j+fx[k]]<=ara[i][j])
                        {
                            ara2[i+fy[k]][j+fx[k]]=ara[i][j];
                        }

                    }
                }
                else continue;
            }
//            print();
//            printf("\n");
        }
    }
}
inline bool check()
{
    bool flag=0;
    int x;
    x=ara[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ara[i][j]!=x)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag) return 1;
    else return 0;
}
inline void transfer()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ara[i][j]=ara2[i][j];
        }
    }
    memset(ara2,0,sizeof(ara2));
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        memset(ara2,0,sizeof(ara2));
        scanf("%d %d",&n,&m);
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++) scanf("%d",&ara[j][k]);
        }
        int cnt=0,x;
        while(1)
        {
            x=check();
            if(x==1)
            {
                convert();
                transfer();
                cnt++;
            }
            else if(x==0) break;
        }
        printf("%d\n",cnt);

    }
}
