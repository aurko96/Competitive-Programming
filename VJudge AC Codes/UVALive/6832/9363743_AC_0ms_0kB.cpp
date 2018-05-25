#include<bits/stdc++.h>
using namespace std;
int n,m,ara[20];
vector<int>vv,vv2;
void make_me(bool bit)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<ara[i];j++)
        {
            if(bit) vv2.push_back(1);
            else vv2.push_back(0);
        }
        bit=1-bit;
    }
}
int calc()
{
    int swaps=0;
    for(int i=0;i<n;i++)
    {
        if(vv[i]!=vv2[i])
        {
            for(int j=i;j<n;j++)
            {
                if(vv2[j]!=vv2[j+1])
                {
                    swaps+=(j+1)-i;
                    swap(vv2[i],vv2[j+1]);
                    break;
                }
            }
        }
    }
    return swaps;
}
int main()
{
    while(cin>>n>>m)
    {
        vv.clear();
        vv2.clear();
        memset(ara,0,sizeof(ara));
        int cnt1,cnt0,odd,even;
        cnt1=cnt0=odd=even=0;
        int mn,x,y;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            vv.push_back(x);
            if(x==1) cnt1++;
            else cnt0++;
        }
        for(int i=0;i<m;i++)
        {
            cin>>ara[i];
            if(i%2==0) odd+=ara[i];
            else even+=ara[i];
        }
        if(odd==even)
        {
            make_me(1);
            x=calc();
            vv2.clear();
            make_me(0);
            y=calc();
            mn=min(x,y);
        }
        else
        {
            if(odd==cnt1) make_me(1);
            else make_me(0);
            mn=calc();
        }
//        for(int i=0;i<vv2.size();i++) cout<<vv2[i]<<" ";
//        cout<<endl;
        cout<<mn<<"\n";
    }
}
