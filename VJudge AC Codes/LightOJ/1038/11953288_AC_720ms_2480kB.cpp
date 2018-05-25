#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
double E[100005];
void make_expected_value()
{
    /*

    For example the number 50 has 6 divisors which are 1,2,5,10,25,50
    so expected value of 50 is
    E50 = 1/6 * (E50 + 1) + 1/6 * (E25 + 1) + 1/6 * (E10 + 1) + 1/6 * (E5 + 1) + 1/6 * (E2 + 1) + 1/6 * (E1 + 1)
    E50 = 1/6 * (E50 + 1) + 1/6 * (2.5 + 1) + 1/6 * (2.666.. + 1) + 1/6 * (2 + 1) + 1/6 * (2 + 1) + 1/6 * (0 + 1)
    5/6 * E50 = 1/6 + 1/6 * (2.5 + 1) + 1/6 * (2.666.. + 1) + 1/6 * (2 + 1) + 1/6 * (2 + 1) + 1/6 * (0 + 1)
    E50 = ( 1 + (2.5+1) + (2.666.. +1) + (2+1) + (2+1) + (0+1) ) / 5

    */

    E[1]=0.0;
    for(int i=2;i<=100001;i++)
    {
        int cnt=0;
        double sum=0.0;
        int sq=sqrt(i);
        for(int j=1;j<=sq;j++)
        {
            if(i%j==0)
            {
                if(j*j!=i)
                {
                    cnt+=2;
                    sum+=(1.00+E[i/j])+(1.00+E[j]);
                }
                else
                {
                    cnt+=1;
                    sum+=(1.00+E[j]);
                }
            }
        }
        E[i]=(sum/(cnt-1));
    }
}
int main()
{
    make_expected_value();
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int x;
        cin>>x;
        cout<<fixed<<setprecision(6)<<"Case "<<i<<": "<<E[x]<<"\n";
    }
}
