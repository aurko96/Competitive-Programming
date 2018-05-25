#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    int i,j,n,x,y,z;
    set<string>st;
    cin>>str1>>str2;
    st.insert(str1);
    st.insert(str2);
    cin>>n;
    cout<<str1<<" "<<str2<<endl;
    for(i=0;i<n;i++)
    {
        cin>>str1>>str2;
        st.insert(str1);
        st.insert(str2);
        for(auto it=st.begin();it!=st.end();it++)
        {
            cout<<"hello "<<*it<<" ";
        }
        cout<<"\n";
    }
}
