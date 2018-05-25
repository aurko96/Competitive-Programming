
#include<bits/stdc++.h>

using namespace std;

int make(int n,int m)
{
    int day = 0;
    int fin = n;
    while(1)
    {
        day++;
        n-=day;
        if(n<=0)return day;
        n = min(fin,n+m);
    }
}

int main()
{
    for(int i = 1;i<=16;i++){
        for(int j = 1;j<=16;j++){
            printf("%3d ",make(i,j));
        }
        cout << endl;    //pattern
    }

}
