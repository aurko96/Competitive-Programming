#include<bits/stdc++.h>
 
using namespace std;
 
#define inf 0x3f3f3f3f
#define LL long long
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
 
/*
#define matrix vector< vector<LL> >
const int K=2;
matrix MatMul(matrix A,matrix B)
{
    int i,j,k;
    matrix c(K+1,vector<LL>(K+1));
    for(i=1; i<=K; i++)for(j=1; j<=K; j++)for(k=1; k<=K; k++)c[i][j]+=A[i][k]*B[k][j];
    return c;
}
 
matrix matpow(matrix A,int K)
{
    if(K==1)return A;
    if(K%2)return MatMul(A,matpow(A,K-1));
    matrix X=matpow(A,K/2);
    return MatMul(X,X);
}
 
*/
//LL BigMod(LL B,LL P,LL M){LL R=1;while(P>0){if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;}return R;}
//LL InverseMod(LL B,LL M){return BigMod(B,M-2,M);}// if M is prime else Phi(M-1);
vector<int>d;
map<string,int>mp;
set<string>st;
vector<string>bal;
vector<int>ans;
void div(int n)
{
    for(int i=1; i<=n; i++)if(n%i==0)d.push_back(i);
}
int main()
{
    FastRead
    vector<string>vv;
    int i,j,n,x,y,cnt=0,flag,k,z=0;
    cin>>n;
    div(n);
    string str2=" ",str;
    vv.push_back(" ");
    for(i=1; i<=n; i++)
    {
        cin>>str;
        vv.push_back(str);
 
    }
    for(i=0; i<d.size(); i++)
    {
        x=n/d[i];
        //cout<<x<<" "<<d[i]<<endl;
        y=0;
        flag=1;
        //cout<<"asdasdasdas"<<endl;
        mp.clear();
        for(k=1; k<=n; k+=x)
        {
            st.clear();
            z=1;
            for(j=k; j<k+x; j++)
            {
                if(vv[j]!="unknown")
                {
                    if(mp[vv[j]]==1 && z==1)flag=0;
                    st.insert(vv[j]);
                    mp[vv[j]]=1;
                    z=0;
                }
                if(st.size()>1)
                {
                    flag=0;
                    mp.clear();
 
                }
            }
            if(flag==0)
            {
                //cout<<"dcsd"<<endl;
                break;
            }
        }
        if(flag==1)
        {
            cnt++;
            ans.push_back(d[i]);
        }
 
    }
    if(ans.size()==0)cout<<"Igor is wrong."<<endl;
    else
    {
        for(i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
 
 
 
}