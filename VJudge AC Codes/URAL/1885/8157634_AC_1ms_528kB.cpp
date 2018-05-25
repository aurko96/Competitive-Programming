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
 
int main()
{
    FastRead
    double h,t,v,x,a,b,c,d;
    cin>>h>>t>>v>>x;
    c=(double)h/t;
    a=(double)(h-v*t)/(x-v);
    b=(double)(t-a);
    if((c<x))
    {
        d=h/x;
        d=d-0.000001;
        b=0.0;
    }
    else d=t;
 
    cout<<fixed<<setprecision(6)<<b<<" "<<d<<endl;
 
}