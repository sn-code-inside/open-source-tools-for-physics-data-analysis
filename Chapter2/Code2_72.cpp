// Factorial computation
#include <iostream>
using namespace std;
long factorial (long value)
{
  if (value > 1){
   return (value * fattoriale (value-1));
  }
  else{
   return 1;
  }
}

int main ()
{
  long data = 9;
  cout << data << "! = " << factorial (data);
  return 0;
}
