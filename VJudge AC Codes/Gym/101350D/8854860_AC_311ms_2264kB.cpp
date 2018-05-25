#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int test;
    cin>>test;
    while(test--)
    {
        int n,i,j,k,x,y;
        //set<int>st;
        cin>>n;
        int ara[100005];
        bool flag=1,flag2=0;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            //st.insert(x);
            if(i==0)
            {
                if(ara[i]%2==0) flag=0;
            }
            else
            {
                if(ara[i]%2!=flag)
                {
                    flag2=1;
                }
            }
        }
        if(flag2) cout<<"no\n";
        else cout<<"yes\n";
//        if(ara[0]%2==0) flag=1;
//        for(i=0;i<n-1;i++)
//        {
//            if()
//        }
//        set<int>::iterator it,it2;
//        if(st.size()==1)cout<<"yes"<<endl;
//        else if(st.size()==2)
//        {
//            it=st.begin();
//            x=*it;
//            it++;
//            y=*it;
//            if((y-x)%2==0)cout<<"yes"<<endl;
//            else cout<<"no"<<endl;
//        }
//        else cout<<"no"<<endl;
    }
}
