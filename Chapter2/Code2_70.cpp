#include <iostream>
// Function prototype capable of reading addresses
// through pointer variables
void swap(double first, double second);

int main(){
  double a = 5.4;
  double b = 10.2;
  cout << "Value of a: " << a << endl;
  cout << "Value of b: " << b << endl;
  swap(a, b);
  cout << "New value of a: " << a << endl;
  cout << "New value of b: " << b << endl;
  return 0;
}

void swap(double first, double second){
   double temp;
   temp = first;
   first = second;
   second = temp;
   return;
}
