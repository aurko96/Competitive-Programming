#include<bits/stdc++.h>
using namespace std;

class base
{
    int b;
public:
    base(){}
    base(int b)
    {
        this->b=b;
        cout<<"In base "<<this->b<<endl;
    }
    base(const base &bb)
    {
        this->b=bb.b;
        cout<<"In copy constructor "<<this->b<<endl;
    }
    void print()
    {
        cout<<"data "<<this->b<<endl;
    }
    friend void foo(base boo);
    friend base func(int x);
};
void foo(base boo)
{
    int x;
    x=boo.b;
    cout<<x<<endl;
}
base func(int x)
{
    base ss(x);
    return ss;
}

class Base
{
public:
    int xx;
};

class Derive:public Base{
public:
    void show(){
        cout << "Ami derive\n";
    }
};

void fooo(int x[])
{
    x[0]=10;
}
int main()
{
    int a[5];
    fooo(a);
    cout << a[0] << endl;
}
