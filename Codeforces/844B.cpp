#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL row[52][5],col[5][52];
int main()
{
    int ara[52][52];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ara[i][j];
            if(ara[i][j]==1)
            {
                row[i][1]++;
                col[1][j]++;
            }
            else
            {
                row[i][0]++;
                col[0][j]++;
            }
        }
    }
    LL sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=(1LL<<row[i][0]);
        sum--;
        sum+=(1LL<<row[i][1]);
        sum--;
    }
    for(int i=0;i<m;i++)
    {
        sum+=(1LL<<col[0][i]);
        sum--;
        sum+=(1LL<<col[1][i]);
        sum--;
    }
    sum-=(n*m);
    cout<<sum<<"\n";
}
