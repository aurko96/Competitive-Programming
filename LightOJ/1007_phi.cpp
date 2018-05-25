#include<bits/stdc++.h>
#define ULL unsigned long long
using namespace std;
int mx=5000000;
ULL phi[5000001];
void compute_phi()
{
    for(int i=1;i<=mx;i++) phi[i]=i;
    for(int i=2;i<=mx;i++)
    {
        if(phi[i]==i)
        {
            phi[i]=i-1;
            for(int j=2*i;j<=mx;j+=i)
            {
                phi[j]=(phi[j]/i)*(i-1);
                //   phi[x] = x * product of all (1-(1/p))
                //   where p is the prime factor of x; [ GCD(x,p)=1 ]
                //   phi[p] = p-1
                //   phi[x] = x * product of all ((p-1)/p)
                //   phi[x] = x * product of all (phi[p]/p)
                //   As it was initialized phi[x] = x
                //   So phi[x] = phi[x] * product of all (phi[p]/p)
                //   phi[x*p] = phi[x] * (p-1)
                //   phi[x*y] = phi[x] * phi[y]
                //   phi[p^k] = p^k - p^(k-1)
                //   a^(phi[x]) = 1 (mod x) ; where GCD(a,x) = 1
                //   a^(phi[p]) = 1 (mod p)
                //   a^(p-1) = 1 (mod p) --> Fermat's little theorem
            }
        }
    }
}
void make_ans()
{
    for(int i=1;i<=mx;i++)
    {
        phi[i]*=phi[i];
        phi[i]+=phi[i-1];
    }
}
int main()
{
    compute_phi();
    make_ans();
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        ULL z;
        z=phi[y]-phi[x-1];
        printf("Case %d: %llu\n",i,z);
    }
}
