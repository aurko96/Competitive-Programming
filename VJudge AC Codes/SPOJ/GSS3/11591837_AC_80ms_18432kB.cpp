#include<bits/stdc++.h>
#define LL long long
using namespace std;
struct node
{
    int sum,maxSum,prefSum,suffSum;

} tree[4*50005];
int ara[50005];
inline node mergeInfo(node x,node y)
{
    node ans;
    ans.sum=x.sum+y.sum;
    ans.maxSum=max(max(x.maxSum,y.maxSum),x.suffSum+y.prefSum);
    ans.prefSum=max(x.prefSum,x.sum+y.prefSum);
    ans.suffSum=max(y.suffSum,y.sum+x.suffSum);
    return ans;
}
inline void build(int at,int left,int right)
{
    if(left==right)
    {
        tree[at].sum=ara[left];
        tree[at].maxSum=ara[left];
        tree[at].prefSum=ara[left];
        tree[at].suffSum=ara[left];
        return;
    }
    int mid=(left+right)/2;
    build(2*at,left,mid);
    build(2*at+1,mid+1,right);
    tree[at]=mergeInfo(tree[2*at],tree[2*at+1]);
//    cout<<"Node = "<<at<<endl;
//    cout<<tree[at].sum<<" "<<tree[at].prefSum<<" "<<tree[at].suffSum<<" "<<tree[at].maxSum<<endl;
}

inline node query(int at,int left,int right,int l,int r)
{
    node ans;
    ans.maxSum=ans.prefSum=ans.suffSum=ans.sum=INT_MIN;
    if(left>r || right<l) return ans;
    if(left>=l && right<=r) return tree[at];
    int mid=(left+right)/2;
    if(r<=mid) return query(2*at,left,mid,l,r);
    if(l>mid) return query(2*at+1,mid+1,right,l,r);
    node x,y;
    x=query(2*at,left,mid,l,r);
    y=query(2*at+1,mid+1,right,l,r);
    return ans=mergeInfo(x,y);

}

inline void update(LL at, LL left, LL right, LL index, LL newvalue)
{
    if(index>right || index<left) return;
    if(left>=index && right<=index)
    {
        tree[at].sum=newvalue;
        tree[at].prefSum=newvalue;
        tree[at].suffSum=newvalue;
        tree[at].maxSum=newvalue;
        return;
    }
    LL mid=(left+right)/2;
    update(2*at,left,mid,index,newvalue);
    update(2*at+1,mid+1,right,index,newvalue);
    tree[at]=mergeInfo(tree[2*at],tree[2*at+1]);
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>ara[i];
    build(1,1,n);
    int q;
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        int a,l,r;
        cin>>a>>l>>r;
        if(a==1) cout<<query(1,1,n,l,r).maxSum<<"\n";
        else if(a==0) update(1,1,n,l,r);
    }
}

