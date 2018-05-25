#include<iostream>
#include<algorithm>
#include<math.h>
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

using namespace std;

#define get(n) scanf("%d",&n)
#define getlong(n) scanf("%lld",&n)
#define put(n) printf("%d\n",n);
#define putlong(n) printf("%lld\n",n);
#define pfc(cases) printf("Case %d: ",++cases)
#define lint long long

lint solve(lint n)
{
    if(n<3)return 0;
    if(n==3)return 1;
    lint ara[40],i;
    ara[0]=0;
    ara[1]=0;
    lint  p = 0;
    p = p+ floor(log2(n));
    for(i=2;i<=p;i++)
    {
        ara[i]=2*ara[i-1]+round(pow(2,i-2));
    }
    return ara[p];
}

int main ()
{
    //freopen("input.txt","r",stdin);
    int T,cases=0;
    scanf("%d",&T);
    while(T--)
    {
        lint n,i,div=1,power=30,p,com=0,temp;
        lint bits=0,ara[40];
        scanf("%lld",&n);
        pfc(cases);
        p = floor(log2(n));


        while(n!=0)
        {
            div = pow(2,p);
            if(n>=div)
            {
                bits = bits + solve(n);
                        if(n>3){
                temp = pow(2,p)+pow(2,p-1);
                if(n>=temp)com+= n - (temp-1);
            }

                n = n % div;
            }
            p--;
        }

        printf("%lld\n",bits+com);

    }

    return 0;
}
