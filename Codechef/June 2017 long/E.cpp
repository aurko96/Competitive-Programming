#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        LL ara[100005];
        LL ans=0,sum=0,calc=0,x,y,z,cnt=0;
        for(int j=0;j<n;j++) cin>>ara[j];
        for(int j=0;j<n;j++)
        {
           if(ara[j]>0)
           {
               calc+=ara[j];
               cnt++;
           }
           else
           {
              x=(calc+ara[j])*(cnt+1);
              if(x==0)
              {
                  calc+=ara[j];
                  cnt++;
                  continue;
              }
              y=calc*cnt;
              if(x>=y)
              {
                  calc+=ara[j];
                  cnt++;
              }
              else
              {
                  if((j+1)<n)
                  {
                      z=(calc+ara[j]+ara[j+1])*(cnt+2);
                      if(z>=y)
                      {
                          calc+=(ara[j]+ara[j+1]);
                          cnt+=2;
                          j++;
                          continue;
                      }
                  }
                  ans+=(calc*cnt);
                  calc=ara[j];
                  cnt=1;
              }
           }

        }
        ans+=(calc*cnt);
        cout<<ans<<"\n";
    }
}
