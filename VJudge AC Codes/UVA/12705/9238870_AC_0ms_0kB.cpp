#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
map<char,int>mp2;
void func()
{
    for(int i=2,k=0;i<=12;i++)
    {
        if(i<=7)
        {
            k++;
            mp[i]=k;
        }
        else
        {
            k--;
            mp[i]=k;
        }

    }
    //for(int i=2;i<=12;i++) cout<<mp[i]<<" ";
}
int main()
{

    int t;
    cin>>t;
    //fflush(stdin);
        getchar();
    for(int i=0;i<t;i++)
    {
        mp.clear();
        mp2.clear();
        func();
        vector<int>vect;
        string str;
        getline(cin,str);
        for(int j=0;j<str.size();j++)
        {
            mp2[str[j]]++;
        }
        for(int j=65;j<=90;j++)
        {
            if(mp2[(char)j]!=0)
            {
                //cout<<"hello\n";
                vect.push_back(mp2[(char)j]);
            }
        }
        for(int j=48;j<=57;j++)
        {
            if(mp2[(char)j]!=0)
            {
                //cout<<"hello\n";
                vect.push_back(mp2[(char)j]);
            }
        }
        sort(vect.begin(),vect.end());
        reverse(vect.begin(),vect.end());
        //for(int j=0;j<vect.size();j++) cout<<vect[j]<<" ";
        //cout<<endl;
        int sum=0;
        for(int j=0;j<vect.size();j++)
        {
            for(int k=2;k<=12;k++)
            {
                if(mp[k]!=0)
                {
                    sum+=(vect[j]*k);
                    mp[k]--;
                    break;
                }
            }
        }
        cout<<sum<<"\n";
    }

}
