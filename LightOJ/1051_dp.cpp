#include<bits/stdc++.h>
using namespace std;
string str;
int len;
bool good,bad,vis[52][52][52];
bool isVowel(char ch)
{
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') return true;
    return false;
}
void call(int pos,int vcnt,int ccnt)
{
    if(pos==len)
    {
        if(vcnt>=3 || ccnt>=5) bad=1;
        else good=1;
        return;
    }
    if(vis[pos][vcnt][ccnt]==1) return;
    else vis[pos][vcnt][ccnt]=1;
    if(vcnt>=3 || ccnt>=5) bad=1;
    else if(str[pos]=='?')
    {
        call(pos+1,vcnt+1,0);
        call(pos+1,0,ccnt+1);
    }
    else if(isVowel(str[pos])) call(pos+1,vcnt+1,0);
    else call(pos+1,0,ccnt+1);

}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        memset(vis,0,sizeof(vis));
        good=bad=0;
        cin>>str;
        len=str.size();
        call(0,0,0);
        if(good && bad) cout<<"Case "<<i<<": MIXED\n";
        else if(bad) cout<<"Case "<<i<<": BAD\n";
        else cout<<"Case "<<i<<": GOOD\n";
    }
}
