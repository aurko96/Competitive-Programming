#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    LL i,j,k,m,n,x,y,z,a[100005];
    string str[100005],str2;
    memset(a,0,sizeof(a));
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str[i];
        if(str[i][0]=='R' && (str[i][1]>=48 && str[i][1]<=57))
        {
            for(j=0;j<str[i].size();j++)
            {
                if(str[i][j]=='C') { a[i]++; break; }
            }
        }
    }
    LL col,row,flag;
    for(i=0;i<n;i++)
    {
        col=row=flag=0;
        str2.clear();
        if(a[i]==0)
        {
            for(j=str[i].size()-1,k=1,m=1;j>=0;j--)
            {
                //cout<<col<<" "<<row<<" "<<k<<" "<<m<<endl;
                if(str[i][j]>=65 && str[i][j]<=90)
                {
                    col+=(str[i][j]-64)*k;
                    k*=26;
                    //cout<<col<<" "<<k<<endl;
                }
                if(str[i][j]>=48 && str[i][j]<=57)
                {
                    row+=(str[i][j]-48)*m;
                    m*=10;
                    //cout<<row<<" "<<m<<endl;
                }
            }
            cout<<'R'<<row<<'C'<<col<<"\n";
        }
        else
        {
            for(j=str[i].size()-1,k=1,m=1;j>=0;j--)
            {
                if(str[i][j]=='C'){ m=1; flag=1; }
                if(str[i][j]>=48 && str[i][j]<=57 && flag==0)
                {
                    col+=(str[i][j]-48)*m;
                    m*=10;
                    //cout<<col<<endl;
                }
                else if(str[i][j]>=48 && str[i][j]<=57 && flag==1)
                {
                    row+=(str[i][j]-48)*m;
                    m*=10;
                    //cout<<row<<endl;
                }
            }
            x=col;
            while(x)
            {
                y=x%26;
                if(x%26==0)
                {
                    y+=26;
                    x--;
                }
                str2+=(y+64);
                x/=26;

            }
            reverse(str2.begin(),str2.end());
            cout<<str2<<row<<"\n";
        }
    }
}
