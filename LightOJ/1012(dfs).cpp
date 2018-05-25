#include<bits/stdc++.h>

#define take(t) scanf("%d",&t)
#define pfc(cases) printf("Case %d: ",++cases)
#define put(n) printf("%d\n",n)
using namespace std;

char maps[100][100];
int h,w,found;

void check(int i,int j)
{
    if(i<0 || j<0 ||i>=h || j >=w)return;

    if(maps[i][j]=='#')return;

    if(maps[i][j]=='@' || maps[i][j]=='.')
    {
        found++;
        maps[i][j]='#';
        check(i+1,j);
        check(i-1,j);
        check(i,j+1);
        check(i,j-1);
    }

}

int main()
{
    //freopen("input.txt","r",stdin);
    int t,cases=0;
    cin >> t;
    while(t--)
    {
        int i,j,x,y;
        cin >> w >> h;
        found=0;
        for(i=0;i<h;i++)
            for(j=0;j<w;j++)
            {
                cin >> maps[i][j];
                if(maps[i][j]=='@')
                    {
                        x=i;y=j;
                    }
            }

        check(x,y);

        pfc(cases);
        put(found);
    }
}
