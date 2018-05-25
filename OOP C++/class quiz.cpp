#include<bits/stdc++.h>
using namespace std;
class samp
{
    int num;
public:
    samp():num(0)
    {
        cout<<"Default Constructor: "<<num<<endl;
    }
    samp(int _num):num(_num)
    {
        cout<<"Param Constructor: "<<num<<endl;
    }
    ~samp()
    {
        cout<<"Samp Destroying: "<<num<<endl;
    }
};
inline samp foo(samp a,samp b,samp c)
{
    cout<<"in foo\n";
    samp p(10);
    samp q(15);
    samp r(20);
    b=p;
    cout<<"end foo\n";
    return p;
}
int main()
{
    samp p(1),q,r(2);
    q=foo(q,r,r);
    cout<<"end main\n";
    return 0;
}
