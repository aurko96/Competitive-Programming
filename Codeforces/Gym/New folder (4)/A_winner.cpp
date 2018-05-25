#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,h2,m1,m2,s1,s2,i,j,n,x,y;
    cin>>n;
    vector<string>vect;
    for(i=0;i<n;i++)
    {
        cin>>h1>>m1>>s1>>h2>>m2>>s2;
        if(h1>h2) vect.push_back("Player2");
        else if(h2>h1) vect.push_back("Player1");
        else
        {
            if(m1>m2) vect.push_back("Player2");
            else if(m2>m1) vect.push_back("Player1");
            else
            {
                if(s1>s2) vect.push_back("Player2");
                else if(s2>s1) vect.push_back("Player1");
                else vect.push_back("Tie");
            }
        }
    }
    for(i=0;i<vect.size();i++) cout<<vect[i]<<"\n";
}
