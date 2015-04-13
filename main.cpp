#include <iostream>

using namespace std;

int main () 
{

  cout << "hello" << endl;

  unsigned int i = 1035;

  std::string stringRep = "";

  while (i != 0)
    {

      if (i % 2 == 0) 
        {
          stringRep = "0" + stringRep;
        }
      else 
        {
          stringRep = "1" + stringRep;
        }

      i = i >> 1;
      
      cout << "i = " << i << endl;
      cout << "stringRep = " << stringRep << endl;
    }
      
  //i = i >> 1;

  //cout << i << endl;

  return 0;
}
