#include "Dog.h"
#include <iostream>
#include<string>
using namespace std;
Dog::Dog()
{
    cout << "zahin " << endl;
}

void Dog:: bark()
{
    cout<< "ghew ghew" << endl;
}
void Dog:: bark(string str)
{
    cout<<str<<endl;
}
