// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    LL i,j,n,x,y,z;
    cin>>n>>x>>y>>z;
    LL p,q,r,s;
    map<char,LL>mp;
    mp['G']=y;
    mp['B']=z;
    p=y;
    q=z;
    string str;
    for(i=0;i<n;i++)
    {
        r=p-mp['G'];
        s=q-mp['B'];
        //cout<<r<<" "<<s<<endl;
        //cout<<str<<endl;
        if(r==x || mp['G']==0)
        {
            p=mp['G'];
            if(mp['B']!=0 && s!=x)
            {
                str+='B';
                mp['B']--;
            }
        }
        else if(s==x || mp['B']==0)
        {
            q=mp['B'];
            if(mp['G']!=0 && r!=x)
            {
                str+='G';
                mp['G']--;
            }
        }
        else if(mp['B']>mp['G'])
        {
            str+='B';
            mp['B']--;
        }
        else if(mp['G']>=mp['B'])
        {
            str+='G';
            mp['G']--;
        }
    }
    if(str.size()!=n) cout<<"NO"<<"\n";
    else cout<<str;
}
