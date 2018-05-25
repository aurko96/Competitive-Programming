#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,t,x,y,z;
    string s1,s2;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>s1>>s2;
        if(s1=="JAN"||s1=="MAR"||s1=="MAY"||s1=="JUL"||s1=="AUG"||s1=="OCT"||s1=="DEC")
        {
            if(s2=="SUN")
            {
                cout<<8<<"\n";
            }
            else if(s2=="MON")
            {
                cout<<8<<"\n";
            }
            else if(s2=="TUE")
            {
                cout<<8<<"\n";
            }
            else if(s2=="WED")
            {
                cout<<9<<"\n";
            }
            else if(s2=="THU")
            {
                cout<<10<<"\n";
            }
            else if(s2=="FRI")
            {
                cout<<10<<"\n";
            }
            else if(s2=="SAT")
            {
                cout<<9<<"\n";
            }
        }
        else if(s1=="FEB")
        {
            if(s2=="SUN")
            {
                cout<<8<<"\n";
            }
            else if(s2=="MON")
            {
                cout<<8<<"\n";
            }
            else if(s2=="TUE")
            {
                cout<<8<<"\n";
            }
            else if(s2=="WED")
            {
                cout<<8<<"\n";
            }
            else if(s2=="THU")
            {
                cout<<8<<"\n";
            }
            else if(s2=="FRI")
            {
                cout<<8<<"\n";
            }
            else if(s2=="SAT")
            {
                cout<<8<<"\n";
            }
        }
        else
        {
            if(s2=="SUN")
            {
                cout<<8<<"\n";
            }
            else if(s2=="MON")
            {
                cout<<8<<"\n";
            }
            else if(s2=="TUE")
            {
                cout<<8<<"\n";
            }
            else if(s2=="WED")
            {
                cout<<8<<"\n";
            }
            else if(s2=="THU")
            {
                cout<<9<<"\n";
            }
            else if(s2=="FRI")
            {
                cout<<10<<"\n";
            }
            else if(s2=="SAT")
            {
                cout<<9<<"\n";
            }
        }
    }
}
