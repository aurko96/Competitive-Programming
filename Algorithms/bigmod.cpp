#include<bits/stdc++.h>
using namespace std;
#define long long long
map<long, long> F;
long int BigMod(long B,long P,long M);
long f(long n,long M) {
	if (F.count(n)) return F[n];
	long k=n/2;
	if (n%2==0) {
		return F[n] = (f(k,M)*f(k,M) + f(k-1,M)*f(k-1,M)) % M;
	} else {
		return F[n] = (f(k,M)*f(k+1,M) + f(k-1,M)*f(k,M)) % M;
	}
}
int main(){
	long n,k,m,t,g=0;
	F[0]=F[1]=1;
	scanf("%lld",&t);
	while(t--)
    {
        cin >> n >> k >> m;
        long bbm=BigMod(k,f(n-1+2,m),m);
        printf("Case %lld: %lld\n",++g,bbm);
    }
    return 0;
}
long int BigMod(long B,long P,long M)
{
	long int R=1;
	while(P>0)
	{
		if(P%2==1)
		{
			R=(R*B)%M;
		}
		P/=2;
		B=(B*B)%M;
	}
	return R;
}
