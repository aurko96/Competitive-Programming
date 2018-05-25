#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x=0,y,z;
    string str;
    map<string,int>mp;
    mp["Tetrahedron"]=4;
    mp["Cube"]=6;
    mp["Octahedron"]=8;
    mp["Dodecahedron"]=12;
    mp["Icosahedron"]=20;
    cin>>n;
    for(i=0;i<n;i++)
    {
        str.clear();
        cin>>str;
        x+=mp[str];
    }
    cout<<x<<"\n";
}
