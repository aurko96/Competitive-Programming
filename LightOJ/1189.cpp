#include<bits/stdc++.h>
#define ULL unsigned long long
using namespace std;
int main()
{
    ULL ara[21];
    ara[0]=1;
    for(int i=1;i<=20;i++) ara[i]=ara[i-1]*i;
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        ULL n;
        scanf("%lld",&n);
        vector<char>vv;
        bool flag=0;
        for(int j=20;j>=0;j--)
        {
            if(ara[j]<=n)
            {
                n-=ara[j];
                int x;
                x=j;
                vv.push_back('!');
                if(x==0) vv.push_back('0');
                while(x!=0)
                {
                    int y;
                    y=x%10;
                    vv.push_back(y+48);
                    x/=10;
                }
                vv.push_back('+');
            }
            if(n==0)
            {
                flag=1;
                break;
            }
            else if(n<0) break;
        }
        if(flag)
        {
            printf("Case %d: ",i);
            vv.pop_back();
            for(int j=vv.size()-1;j>=0;j--)
            {
                printf("%c",vv[j]);
            }
            printf(" \n");
        }
        else
        {
            printf("Case %d: impossible\n",i);
        }
    }
}
