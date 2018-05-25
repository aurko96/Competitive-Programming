// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
string str[150];
int n,m;
int brute(int x)
{
    //cout<<x<<endl;
   // cout<<"hello\n";
    int cnt=0;
    int mncnt=10000;
    for(int i=0;i<n-(x-1);i++)
    {
        cnt=0;
        for(int j=0;j<m-(x-1);j++)
        {
           // cout<<m-x<<endl;
            cnt=0;
            for(int k=i;k<i+x;k++)
            {
                for(int l=j;l<j+x;l++)
                {
                    if(str[k][l]=='W') cnt++;

                   // cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
                }
            }
            mncnt=min(mncnt,cnt);
        }
    }
    return mncnt;
}
int main()
{
    FastRead
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    int mnrow=10000,mncol=10000,mxrow=0,mxcol=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(str[i][j]=='B')
            {
                mnrow=min(mnrow,i);
                mncol=min(mncol,j);
                mxrow=max(mxrow,i);
                mxcol=max(mxcol,j);
            }
        }
    }
    //cout<<mnrow<<" "<<mncol<<" "<<mxrow<<" "<<mxcol<<endl;
    int mxspace=0;
    mxspace=max(mxspace,max((mxrow-mnrow),(mxcol-mncol)));
    //cout<<mxspace<<endl;
    mxspace++;
    if(mxspace>n || mxspace>m)
    {
        cout<<-1<<"\n";
        return 0;
    }
    //cout<<mxspace<<endl;
    int x,y,z;
    x=brute(mxspace);
    cout<<x<<"\n";
}
