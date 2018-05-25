#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        map<string,double>mp;
        string str,str3;
        char str2[100],str4[100];
        int n,m;
        scanf("%d %d",&n,&m);
        for(int j=0;j<n;j++)
        {
            scanf("%s %lf",&str2,&x);
            int z=strlen(str2);
            //cout<<z<<endl<<endl;
            for(int k=0;k<z;k++)
            {
                str+=str2[k];
            }
            //cout<<str<<endl;
            mp[str]=x;
            str.clear();
        }
        double sum=0.00;
        mp["JD"]=1.000;
        for(int j=0;j<m;j++)
        {
            scanf("%lf %s",&x,&str4);
            int z=strlen(str4);
            for(int k=0;k<z;k++)
            {
                str3+=str4[k];
            }
            //cout<<str3<<endl<<endl;
            sum+=(x*mp[str3]);
            //cout<<sum<<endl;
            str3.clear();
        }
        //cout<<sum<<endl;
        printf("%.6lf\n",sum);
    }
}
