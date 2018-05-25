#include <iostream>
#include<string>
#include "Dog.h"
using namespace std;

int main()
{
    Dog dd;
    cout << "Hello world!" << endl;

    dd.bark();
    dd.bark("bark bark");

    return 0;
}
