#include<bits/stdc++.h>

using namespace std;

#define LL long long
string str;
LL dp[33][2][2];

string convert(LL n)
{
   if(n == 0)return "0";
   string s;
   while(n > 0){
      s = s + char(n % 2 + '0');
      n/=2;
   }
   reverse(s.begin(),s.end());
   return s;
}

LL calculateNumbers(int pos,int tight)
{
   LL ret = 0;
   for(int i = pos ; i < str.size();i++){
      if(tight == 1)ret = 2 * ret + (str[i] - '0');
      else ret = 2 * ret + 1;
   }
   return ret + 1;
}

LL call(int pos,int tight,int pre)
{
   if(pos == str.size())return 0;
   if(dp[pos][tight][pre]!=-1)return dp[pos][tight][pre];
   LL ret = 0;

   int limit = str[pos] - '0';
   if(tight == 0)limit = 1;

   for(int i = 0;i<=limit;i++){
      LL add = 0 , newtight = tight;
      if(i != limit)newtight = 0;
      if(pre == 1 and i == 1){
         add = calculateNumbers(pos + 1,newtight);
      }
      ret += add + call(pos + 1,newtight,i);

   }
   return dp[pos][tight][pre] = ret;
}
int main()
{
   int t,cases=0;
   cin >> t;
   while(t--)
   {
      memset(dp,-1,sizeof(dp));
      LL n;
      cin >> n;
      str = convert(n);
      cout << "Case " << ++cases << ": " << call(0,1,0) << "\n";
   }

}
