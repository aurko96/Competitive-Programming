#include<bits/stdc++.h>
using namespace std;
bool cmp(string x,string y)
{
    return x+y<y+x;
}
int main()
{
    string str;
    vector<string>vect;
    int i,n,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str;
        vect.push_back(str);
        str.clear();
    }
    sort(vect.begin(),vect.end(),cmp);
    for(i=0;i<vect.size();i++)
    {
        cout<<vect[i];
    }
}
