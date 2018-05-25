#include<bits/stdc++.h>
#define ULL unsigned long long
#define LL long long

using namespace std;
const int N = 11;

const LL MOD = 1e9 + 7;
LL p = 3797;
LL h1[N];

LL BigMod(LL B,LL P,LL M)
{
   LL R = 1;

   while(P)
   {
       if((P&1))R = (R * B)%M;
       P/=2;
       B = (B * B)%M;
   }
   return R;
}

int main()
{
    string str;
    cin >> str;

    for(int i = str.size()-1,in = 0;i>=0;i--,in++){
        h1[i] = (h1[i+1] + BigMod(p,in,MOD)*str[i])%MOD;
    }
    int n = str.size();
    while(1)
    {
        int l1,r1,l2,r2;
        cin >> l1 >> r1 >> l2 >> r2;


        LL v1 = BigMod(p,n-r1,MOD);
        LL v2 = BigMod(p,n-r2,MOD);

        LL H1 = (h1[l1] - h1[r1+1])*BigMod(v1,MOD-2,MOD);
        LL H2 = (h1[l2] - h1[r2+1])*BigMod(v2,MOD-2,MOD);

        H1%=MOD;
        H2%=MOD;

        if(H1==H2)cout << "Paisi\n";
        else cout << "Nai\n";
    }
}
