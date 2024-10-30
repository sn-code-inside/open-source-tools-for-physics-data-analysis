#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ofstream writeme; //readme is an object 
readme.open("/path/of/folder/nome_of_file.dat");//method open allows to access to the file  in writing mode
float container =15.23;
writeme>>container; //the operator >> write a value memorized into the variable container in the file
writeme.close();//close method closes the link to the file
return 0;
}
