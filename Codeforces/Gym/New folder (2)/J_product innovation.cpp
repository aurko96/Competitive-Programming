#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,n,x,y,z;
    cin>>n>>z;
    vector<LL>vect;
    for(i=0;i<n;i++)
    {
        cin>>y;
        vect.push_back(y);
    }
    cin>>x;
    string str;
    for(i=0;i<x;i++)
    {
        cin>>str;
        if(str[0]=='i')
        {
            cin>>y;
            if(str[6]=='L')
            {
                vect.insert(vect.begin()+z-1,y);
            }
            else if(str[6]=='R')
            {
                vect.insert(vect.begin()+z,y);
            }
           // for(i=0;i<vect.size();i++) cout<<vect[i]<<" ";
            //cout<<endl;
        }
        else if(str[0]=='m')
        {
            if(str[4]=='L')
            {
                if(z==1) continue;
                else z--;
            }
            else if(str[4]=='R')
            {
                if(z==vect.size()) continue;
                else z++;
            }
        }
        else if(str[0]=='p') cout<<vect[z-1]<<"\n";
    }
    //for(i=0;i<vect.size();i++) cout<<vect[i]<<" ";
}
