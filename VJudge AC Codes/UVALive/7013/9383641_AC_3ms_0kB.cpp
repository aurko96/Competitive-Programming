#include<bits/stdc++.h>
using namespace std;
map<int,int>mpR,mpG,mpB;
map<int,string>mpN;
void make_table()
{
    for(int i=1;i<=16;i++)
    {
        if(i==1) mpR[i]=255;
        if(i==2) mpR[i]=192;
        if(i==3) mpR[i]=128;
        if(i>=5 && i<=8)
        {
            if(i%2==0) mpR[i]=128;
            else mpR[i]=255;
        }
        if(i==15) mpR[i]=255;
        if(i==16) mpR[i]=128;
    }
    for(int i=1;i<=16;i++)
    {
        if(i==1) mpG[i]=255;
        if(i==2) mpG[i]=192;
        if(i==3) mpG[i]=128;
        if(i>=7 && i<=12)
        {
            if(i%2==0) mpG[i]=128;
            else mpG[i]=255;
        }
    }
    for(int i=1;i<=16;i++)
    {
        if(i==1) mpB[i]=255;
        if(i==2) mpB[i]=192;
        if(i==3) mpB[i]=128;
        if(i>=11 && i<=16)
        {
            if(i%2==0) mpB[i]=128;
            else mpB[i]=255;
        }
    }

    mpN[1]="White";
    mpN[2]="Silver";
    mpN[3]="Gray";
    mpN[4]="Black";
    mpN[5]="Red";
    mpN[6]="Maroon";
    mpN[7]="Yellow";
    mpN[8]="Olive";
    mpN[9]="Lime";
    mpN[10]="Green";
    mpN[11]="Aqua";
    mpN[12]="Teal";
    mpN[13]="Blue";
    mpN[14]="Navy";
    mpN[15]="Fuchsia";
    mpN[16]="Purple";

}
int main()
{
    make_table();
    int r,g,b;
    while(cin>>r>>g>>b)
    {
        int mn=1e9,x,y;
        if(r==-1 && g==-1 && b==-1) break;
        for(int i=1;i<=16;i++)
        {
            x=sqrt(((mpR[i]-r)*(mpR[i]-r))+((mpG[i]-g)*(mpG[i]-g))+((mpB[i]-b)*(mpB[i]-b)));
            //cout<<x<<endl;
            if(x<mn)
            {
                mn=x;
                y=i;
            }
        }
        cout<<mpN[y]<<"\n";
    }
}
