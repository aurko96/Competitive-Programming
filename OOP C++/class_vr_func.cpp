#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    int b;
    base(){}
    base(int b)
    {
        this->b=b;
        cout<<"Inside base having "<<this->b<<endl;
    }
    virtual void show()
    {
        cout<<100<<endl;
    }
};
class derr:public base
{
public:
    int d;
    derr(){}
    derr(int d)
    {
        this->d=d;
        cout<<"Inside derived having "<<this->d<<endl;
    }
    void show()
    {
        cout<<150<<endl;
    }
    void print()
    {
        cout<<200<<endl;
    }
};
int main()
{
    base *bb,ob1;
    derr *dd,ob2;
    //ob2.show();
    bb=&ob2;
    bb->show();
    //dd=&ob2;
    //dd->print();
}
