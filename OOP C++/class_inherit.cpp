#include<bits/stdc++.h>
using namespace std;
class base1
{
public:
    int x;
    base1(int x)
    {
        this->x=x;
        cout<<"In b1 = "<<this->x<<endl;
    }
};
class base2
{
public:
    int x;
    base2(int x)
    {
        this->x=x;
        cout<<"In b2 = "<<this->x<<endl;
    }
};
class derr:public base2,public base1
{
    int d;
public:
    derr(int d,int e,int f):base1(e),base2(f)
    {
        this->d=d;
        cout<<"In derr = "<<this->d<<" "<<base2::x<<endl;
    }
};
int main()
{
    derr obj(5,6,7);
}
