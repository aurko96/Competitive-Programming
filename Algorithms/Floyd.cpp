    #include<bits/stdc++.h>
    #define MAX 100
    using namespace std;

    int w[MAX][MAX];

    int main()
    {
        ///Set values of W[][] array to INFINITY
        ///Take Input

        for(int k=1;k<=n;k++)
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    if(w[i][k] + w[k][j] < w[i][j])
                    ///Condition May Change
                    {
                        w[i][j] = w[i][k] + w[k][j];
                    }
                }
            }
        }
    }

