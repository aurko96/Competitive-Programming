#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int main()
{
    int n;
    cin>>n;
    multiset<pair<int,int> >st;
    pair<int,int>pp;
    for(int i=0;i<n;i++)
    {
        string str;
        int x,y;
        cin>>str>>x>>y;
        if(str[0]=='a') st.insert(make_pair(x,y));
        else if(str[0]=='r') st.erase(make_pair(x,y));
        else if(str[0]=='f')
        {
            auto it=st.lower_bound(make_pair(x+1,y+1));
            pp=*it;
            //cout<<"hii  "<<pp.ff<<" "<<pp.ss<<endl;
            if(st.find(pp)==st.end()) cout<<-1<<endl;
            else
            {
               while(1)
               {
                   cout<<pp.ff<<" "<<pp.ss<<endl;
                   if(st.find(pp)==st.end())
                   {
                       cout<<-1<<endl;
                       break;
                   }
                   if(pp.ff>x && pp.ss>y)
                   {
                       cout<<pp.ff<<" "<<pp.ss<<endl;
                       break;
                   }
                   else
                   {
                       it=st.lower_bound(make_pair(pp.ff+1,pp.ss+1));
                       pp=*it;
                   }
               }
            }
        }
    }
//    for(auto it=st.begin();it!=st.end();it++)
//    {
//        pair<int,int>pp;
//        pp=*it;
//        cout<<pp.ff<<" "<<pp.ss<<endl;
//    }
//    int a,b;
//    cin>>a>>b;
//    auto it=st.lower_bound(make_pair(a+1,b+1));
//    pp=*it;
//    if(st.find(pp)==st.end()) cout<<-1<<endl;
//    cout<<pp.ff<<" "<<pp.ss<<endl;
//    int c,d;
//    cin>>c>>d;
//    st.erase(make_pair(c,d));
//    cin>>a>>b;
//    it=st.lower_bound(make_pair(a+1,b+1));
//    pp=*it;
//    if(st.find(pp)==st.end()) cout<<-1<<endl;
//    cout<<pp.ff<<" "<<pp.ss<<endl;
}
