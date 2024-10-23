#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ifstream readme; //readme is an object 
readme.open("/path/of/folder/nome_of_file.dat");//method open allows to access to the file in reading mode
float container;
leggimi>>container; //the operator >> read a value of the file and assign it to the variable container
cout<<"that what we read "<<container<<endl; //just to show it works
readme.close();//close method closes the link to the file
return 0;
}
