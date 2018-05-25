#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        string str,str2;
        cin>>str;
        str2=str;
        int n;
        n=str.size();
        int j=0,k=n-1,cnt=0;
        while(j<k)
        {
            if(str[j]!=str[k]) cnt++;
            j++;
            k--;
        }

        int y;
        y=n/2;
        if(n%2==0)
        {

            str[y]++;
            str[y-1]++;
        }
        else
        {
            str[y]++;
        }


        j=0;
        k=n-1;
        while(j<k)
        {
            if(str[j]!=str[k])
            {


                str[k]=str[j];
                cnt--;

            }
            j++;
            k--;
        }
        if(n%2!=0)
        {
            int x=n/2;
            str[x]++;
        }
        j=0;
        k=n-1;
        bool flag=0;
        while(j<k)
        {
            if(flag)
            {
                str[j]='0';
                str[k]='0';
            }
            if(str[j]>str2[j]) flag=1;
            j++;
            k--;
        }
        if(flag && n%2!=0)
        {
            str[n/2]='0';
        }
        cout<<"Case "<<i<<": "<<str<<"\n";
    }
}
