#include<bits/stdc++.h>
#define mx 100000
using namespace std;

LL L[mx];
LL P[mx][22];
LL T[mx];
vector<LL>G[mx];
void dfs(LL from,LL u,LL dep)
{
    T[u]=from;
    L[u]=dep;
    for(LL i=0;i<(LL)G[u].size();i++)
    {
        LL v=G[u][i];
        if(v==from) continue;
        dfs(u,v,dep+1);
    }
}

LL lca_query(LL N, LL p, LL q)
  {
      LL tmp, log, i;

      if (L[p] < L[q])
          tmp = p, p = q, q = tmp;

        log=1;
      while(1) {
        LL next=log+1;
        if((1<<next)>L[p])break;
        log++;

      }

        for (i = log; i >= 0; i--)
          if (L[p] - (1 << i) >= L[q])
              p = P[p][i];

      if (p == q)
          return p;

        for (i = log; i >= 0; i--)
          if (P[p][i] != -1 && P[p][i] != P[q][i])
              p = P[p][i], q = P[q][i];

      return T[p];
  }

void lca_init(LL N)
  {
      memset (P,-1,sizeof(P));
      LL i, j;
       for (i = 0; i <= N; i++)
          P[i][0] = T[i];

      for (j = 1; 1 << j <= N; j++)
         for (i = 0; i <= N; i++)
             if (P[i][j - 1] != -1)
                 P[i][j] = P[P[i][j - 1]][j - 1];
 }



