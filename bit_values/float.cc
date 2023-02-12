#include <iomanip>
#include <iostream>

using namespace std;

int main ()
{
  uint32_t x = 0;
  

  x |= 0b1.101 x 2^-5;
  //////////////////////////
  // MANIPULATE BITS HERE //
  //////////////////////////


  float f = reinterpret_cast<float&>(x);
  cout << "x = " << x << endl;
  cout << "f = " << showpos << scientific << setprecision(8) << f << endl;
}

