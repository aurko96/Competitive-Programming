#include<bits/stdc++.h>
#define N b.size()
using namespace std;
int main()
{
    vector<int>a(10);
    vector <int>::iterator p;
    int i=1,j,x;
    for(vector<int>::iterator p=a.begin();p!=a.end();++p,++i)
    {
        *p=i;
    }
    x=a.size();
    cout<<x<<endl;
    for(j=0;j<x;j++)
    {
        cout<<a[j]<<" ";
    }
    cout<<endl;
    a.push_back(12);
    x=a.size();
    cout<<x<<endl;
    for(j=0;j<x;j++)
    {
        cout<<a[j]<<" ";
    }
    cout<<endl;
    deque<int>b(10);
    i=1;
    for(deque<int>:: iterator q=b.begin();q!=b.end();++q,++i)
    {
        *q=i;
    }
    for(j=0;j<b.size();j++)
    {
        cout<<b[j]<<" ";
    }
    cout<<endl<<N<<endl;
    b.push_front(12);
    for(j=0;j<b.size();j++)
    {
        cout<<b[j]<<" ";
    }
    cout<<endl<<N<<endl;
    b.pop_back();
    for(j=0;j<b.size();j++)
    {
        cout<<b[j]<<" ";
    }
    int c=13;
    cout<<endl<<N<<endl;
    b.push_back(c);
    for(j=0;j<b.size();j++)
    {
        cout<<b[j]<<" ";
    }
    cout<<endl<<N<<endl;
}
