#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
string str,str2;
int dp[1005][1005];
int dp2[1005][1005];
int n,m,next_char1[1005][26],next_char2[1005][26],index1[26],index2[26];
const int mod=1000007;

int lcs(int pos1,int pos2)  // LCS DP
{
    if(pos1==n || pos2==m) return 0;
    if(dp[pos1][pos2]!=-1) return dp[pos1][pos2];
    if(str[pos1]==str2[pos2]) return dp[pos1][pos2]=1+lcs(pos1+1,pos2+1);
    else return dp[pos1][pos2]=max(lcs(pos1+1,pos2),lcs(pos1,pos2+1));
}

int call(int pos1,int pos2)
{
    if(pos1==n || pos2==m) return 1;
    if(dp2[pos1][pos2]!=-1) return dp2[pos1][pos2];
    int lcs_len=lcs(pos1,pos2);  // finding LCS at the current state
    if(lcs_len==0) return dp2[pos1][pos2]=1;
    int ret=0;
    for(int i=0;i<26;i++)
    {
        int x=next_char1[pos1][i];
        int y=next_char2[pos2][i];
        if(lcs(x,y)==lcs_len)
        {
            // if we start the LCS from other characters of both the strings (indexes 'x' and 'y') which are from or after
            // the current state's pos1 and pos2 characters, and when it becomes equal to the LCS of the current state of the dp
            // then we get a distinct LCS from indexes 'x' and 'y'
            ret+=call(x+1,y+1);
            ret%=mod;
        }
    }
    return dp2[pos1][pos2]=ret;
}

void precompute()
{
    for(int i=0;i<26;i++) index1[i]=n; // initializing all indexes of char with index greater than str[n-1]
    for(int i=n-1;i>=0;i--)
    {
        index1[str[i]-'a']=i;  // indexes of characters of string str
        for(int j=0;j<26;j++)
        {
            next_char1[i][j]=index1[j];
            // contains indexes of all characters of 1st string
            // from the i-th indexed character of the 1st string
        }
    }

    for(int i=0;i<26;i++) index2[i]=m; // initializing all indexes of char with index greater than str2[m-1]
    for(int i=m-1;i>=0;i--)
    {
        index2[str2[i]-'a']=i;  // indexes of characters of string str2
        for(int j=0;j<26;j++)
        {
            next_char2[i][j]=index2[j];
            // contains indexes of all characters of 2nd string
            // from the i-th indexed character of the 2nd string
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        memset(dp,-1,sizeof(dp));
        memset(dp2,-1,sizeof(dp2));
        cin>>str>>str2;
        n=str.size();
        m=str2.size();
        precompute();
        int ans;
        ans=call(0,0);
        cout<<"Case "<<i<<": "<<ans<<"\n";
    }
}
