#include<bits/stdc++.h>
#define LL long long
using namespace std;
bool flag[200005];
struct shirt
{
    int price,fr,bk;
} ss[200002];
bool cmp(shirt x,shirt y)
{
    if(x.price<y.price) return 1;
    else return 0;
}
int main()
{
    LL i,j,n,x,y,z;
    //shirt ss[200002];
    cin>>n;
    for(i=0;i<n;i++) cin>>ss[i].price;
    for(i=0;i<n;i++) cin>>ss[i].fr;
    for(i=0;i<n;i++) cin>>ss[i].bk;
    sort(ss,ss+n,cmp);
    for(i=0;i<n;i++)
    {
        cout<<ss[i].price<<" "<<ss[i].fr<<" "<<ss[i].bk<<endl;
    }
    cin>>x;
    for(i=0;i<x;i++)
    {
        cin>>y;

    }

}
