#include<bits/stdc++.h>
using namespace std;
bool books[1000000001];
int main()
{
    long long i,j,n,x,y,z;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld",&x,&y);
        if(x==1)
        {
            books[y]=1;
        }
        if(x==2)
        {
            if(books[y]==1)
            {
                printf("yes\n");
            }
            else
            {
                printf("no\n");
            }
        }
    }
}
