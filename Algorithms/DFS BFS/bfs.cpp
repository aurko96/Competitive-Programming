#include<bits/stdc++.h>
    #define MAX 100

    using namespace std;

    vector<int>td[MAX];
    bool vis[MAX];

    int main(){
        ///Take Input
        ///Take The Start Point and Push in the queue
        queue<pair<int,int> > Q;
        Q.push(make_pair(start,0));

        while(not Q.empty()){
            int u = Q.front().first;
            int v = Q.front().second;

            Q.pop();
            vis[u]=1;
            for(int i=0;i<td[u].size();i++){
                int x = td[u][i];

                if(vis[x]==0)Q.push(make_pair(x,v+1));
            }
        }
    }
