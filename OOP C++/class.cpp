#include<bits/stdc++.h>
using namespace std;
class hello
{
    string name;
    string password;
public:
//    hello()
//    {
//        name = "Fardin";
//        password = "Malik";
//    }

    void set_(string _name, string _pass)
    {
        name = _name;
        password = _pass;
    }
    string get_name()
    {
        return name;
    }
    void get()
    {
        cout << name << " " << password <<endl;
    }


};
class myclass
{
    int a,b;

public:
    hello ok;
    void set_int(int _a,int _b,hello _ok)
    {
        a=_a;
        b=_b;
       // ok = _ok;
    }
    void print()
    {
        cout << a << " " << b << " ";
        ok.get();
       // cout<<ok.get_name()<<endl;
    }
};
int main()
{
    myclass m1;
    hello h1;
    string n;
  //  h1.set_("FArdin","malik");
    m1.set_int(3,5,h1);
    m1.ok.set_("Fardin","Malik");
    n = m1.ok.get_name();
    cout << n << endl;
   //m1.print();

}
