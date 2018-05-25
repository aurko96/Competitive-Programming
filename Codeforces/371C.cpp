#include<bits/stdc++.h>
#define LL long long
#define endl "\n"
using namespace std;
int main()
{
    string str;
    cin>>str;
    LL nb,ns,nc,pb,ps,pc,r;
    cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    LL cntb,cnts,cntc;
    cntb=cnts=cntc=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='B') cntb++;
        if(str[i]=='S') cnts++;
        if(str[i]=='C') cntc++;
    }
//    cout<<"cnt  = "<<cntb<<" "<<cnts<<" "<<cntc<<endl;
    LL low=0,high=1e13,mid,ans=0;
    while(low<=high)
    {
        mid=(low+high)/2;   // mid is the number of hamburgers
        //cout<<mid<<endl;

        LL hamB,hamS,hamC;
        hamB=mid*cntb;      //ingredients of mid
        hamS=mid*cnts;
        hamC=mid*cntc;

        LL buyB,buyS,buyC;
        buyB=max(0LL,hamB-nb);    // ingredients to buy for mid
        buyS=max(0LL,hamS-ns);
        buyC=max(0LL,hamC-nc);

        LL taka= buyB*pb+buyS*ps+buyC*pc;  //money needed to buy ingredients

//        cout<<" val  = "<<hamB<<" "<<hamS<<" "<<hamC<<endl;
//        cout<<" baki = "<<buyB<<" "<<buyS<<" "<<buyC<<endl;
//        cout<<" taka = "<<taka<<" "<<r<<endl;
        if(taka<=r)
        {
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;
    }
    cout<<ans<<endl;
}
