#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
vector<int> tree[4*300005];
int ara[300005];
inline void build(int at,int left,int right)
{
    if(left==right){ tree[at].push_back(ara[left]); return; }
    int mid=(left+right)/2;
    build(2*at,left,mid);
    build(2*at+1,mid+1,right);
    tree[at].resize(tree[2*at].size()+tree[2*at+1].size());
    merge(tree[2*at].begin(),tree[2*at].end(),tree[2*at+1].begin(),tree[2*at+1].end(),tree[at].begin());
//    cout<<"Node = "<<at<<endl;
//    for(int i=0;i<tree[at].size();i++) cout<<tree[at][i]<<" ";
//    cout<<endl;
}

inline int query(int at,int left,int right,int l,int r,int k)
{
    int ans=0;
    if(left>r || right<l) return 0;
    if(left>=l && right<=r)
    {
        ans=lower_bound(tree[at].begin(),tree[at].end(),k+1)-tree[at].begin();
       // cout<<"Hello  "<<ans-1<<endl;
       if((ans-1)<0 || (ans-1)>=tree[at].size()) return 0;
       return tree[at][ans-1];
    }
    int mid=(left+right)/2;
    int x,y;
    x=query(2*at,left,mid,l,r,k);
    y=query(2*at+1,mid+1,right,l,r,k);
    return ans=max(ans,max(x,y));
}

int main()
{
    FastRead
    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++) cin>>ara[i];
    build(1,0,n-1);
    for(int i=0;i<q;i++)
    {
        int l,r,k;
        cin>>l>>r>>k;
        cout<<query(1,0,n-1,l,r,k)<<"\n";
    }
}
