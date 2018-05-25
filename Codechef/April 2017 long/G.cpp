#include<bits/stdc++.h>
#define LL long long
using namespace std;
int n,m;
string str[1005],str2;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int i,j,x,y,z,t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        bool flag=0;
        int cnt=0;
        int sum=0;
        cin>>n>>m;
        cin>>str2;
        for(i=0;i<m;i++) cin>>str[i];
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                cnt=0;
                flag=0;
                if(str[i][j]=='.')
                {
                    int r,s;
                    r=i;
                    s=j;
                    for(int p=0;p<str2.size();p++)
                    {
                        if(str2[p]=='L')
                        {
                            s--;
                            if(s<0)
                            {
                                flag=1;
                                s=0;
                            }
                        }
                        else if(str2[p]=='R')
                        {
                            s++;
                            if(s==m)
                            {
                                flag=1;
                                s--;
                            }
                        }
                        else if(str2[p]=='U')
                        {
                            r--;
                            if(r<0)
                            {
                                flag=1;
                                r=0;
                            }
                        }
                        else if(str2[p]=='D')
                        {
                            r++;
                            if(r==m)
                            {
                                flag=1;
                                r--;
                            }
                        }
                        if(str[r][s]=='#' || flag==1) break;
                        else cnt++;

                    }
                    //cout<<cnt<<"\n";
                    sum^=cnt;
                }
            }
        }
        cout<<sum<<"\n";

    }

}
