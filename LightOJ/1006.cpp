#include <stdio.h>
int main()
{
    long long a, b, c, d, e, f,i,n;
    long long x[10005];
    int caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- )
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &x[0], &x[1], &x[2], &x[3], &x[4], &x[5], &n);
        for(i=6; i<=n; i++)
        {
            x[i]=((x[i-1])+(x[i-2])+(x[i-3])+(x[i-4])+(x[i-5])+(x[i-6]))% 10000007;
        }
        printf("Case %d: %lld\n", ++caseno, x[n]% 10000007);
    }
    return 0;
}
