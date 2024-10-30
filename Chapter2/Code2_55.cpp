//the program tells a use
#include <iostream>
#include <string>
using namespace std;
int main(){
    ifstream readme("disorderedfile.dat");
    float value;
    int countme=0;
    while(!readme.eof()){
    readme>>value;
    countme++;
    }
    countme--; //because the object must make at least a failed lecture 
    return 0;
}
