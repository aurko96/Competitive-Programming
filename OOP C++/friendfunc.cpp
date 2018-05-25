#include<bits/stdc++.h>
using namespace std;

class base
{
    int b;
public:
    base(int b)
    {
        this->b = b;
        cout<<"In Base "<< this->b<<endl;
    }
    friend void foo(base a);
     friend void foop(base a);
};
class der
{
public:
    void foop(base a)
 {
     int x;
     x = a.b;
     cout<<"class " <<x<<endl;
 }
};

void foo(base a)
{
    int x;
    x = a.b;
    cout<<"not class "<<x<<endl;

}


 int main()
 {
     base b1(10);
     foo(b1);
 }
