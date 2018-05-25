#include<bits/stdc++.h>
using namespace std;
class base
{
    int b,x;
public:
    base(){}
    base(int b)
    {
        this->b=b;
        cout<<"Inside base having "<<this->b<<endl;
    }
    void set_val(int x)
    {
        this->x=x;
        cout<<"IN bb "<<this->x<<endl;
    }
    void get_val(int x)
    {
        cout<<"In val base "<<x<<endl;
    }
};
class base2
{
    int bb;
public:
    base2(){}
    base2(int bb)
    {
        this->bb=bb;
        cout<<"Inside base_2 having "<<this->bb<<endl;
    }
    virtual void print_data(int x)=0;
};
class der1:virtual public base,public base2
{
    int d;
public:
    der1(){}
    der1(int c,int d):base(c)
    {
        this->d=d;
        cout<<"Inside derieved_A having "<<this->d<<endl;
    }
    void print_data(int x)
    {
        cout<<"Inside pure virtual function in derieved_A from abstract base_2 having "<<x<<endl;
    }
    void get_val(int x)
    {
        cout<<"In val 1 "<<x<<endl;
    }
};
class der2:virtual public base
{
    int e;
public:
    der2(){}
    der2(int e,int f):base(f)
    {
        this->e=e;
        cout<<"Inside derieved_B having "<<this->e<<endl;
    }
    void print()
    {
        cout << "10" << " "<<endl;
    }
    void get_val(int x)
    {
        cout<<"In val2 "<<x<<endl;
    }
};
class der3:virtual public der1,virtual public der2
{
    int a;
public:
    der3(){}
    der3(int a,int b,int c,int d,int e):der1(b,c),der2(d,e)
    {
        this->a=a;
        cout<<"Inside derieved_C having "<<this->a<<endl;
    }
    void get_val(int x)
    {
        cout<<"In val3 "<<x<<endl;
    }
};
class der4:virtual public der3
{
    int a;
public:
    der4(){}
    der4(int a,int b,int c,int d,int e,int f):der3(b,c,d,e,f)
    {
        this->a=a;
        cout<<"In der4 "<<this->a<<endl;
    }
};
int main()
{
    der4 obj(5,6,7,8,9,10);
    obj.get_val(100);
    obj.set_val(300);
    obj.print();
    base2 *ptr;
    der1 ob2;
    ob2.print_data(1000);
    ptr=&ob2;
    ptr->print_data(250);
}
