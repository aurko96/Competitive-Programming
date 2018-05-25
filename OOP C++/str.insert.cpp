// inserting into a string
#include <iostream>
#include <string>
using namespace std;
int main ()
{
  std::string str="to be question";
  std::string str2="the ";
  std::string str3="or not to be";
  std::string::iterator it;

  // used in the same order as described above:
  cout<<str.insert(6,str2)<<endl;                 // to be (the )question
  cout<<str.insert(6,str3,3,4)<<endl;             // to be (not )the question
  cout<<str.insert(10,"that is cool",8)<<endl;    // to be not (that is )the question
  cout<<str.insert(10,"to be ")<<endl;            // to be not (to be )that is the question
  cout<<str.insert(15,1,':')<<endl;               // to be not to be(:) that is the question
  it = str.insert(str.begin()+5,','); // to be(,) not to be: that is the question
  str.insert(str.end(),3,'.');       // to be, not to be: that is the question(...)
  str.insert(it+2,str3.begin(),str3.begin()+3); // (or )

  std::cout << str << '\n';
  return 0;
}
