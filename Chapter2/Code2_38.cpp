#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ifstream writeme; 
readme.open("/mypath/nome_of_file.dat");
if(!readme.is_open()){
cout<<"sorry! I'm unable to reach the file"<<endl;
}

float container =15.23;
writeme>>container; //the operator >> write a value memorized into the variable container in the file
writeme.close();//close method closes the link to the file
return 0;
}
