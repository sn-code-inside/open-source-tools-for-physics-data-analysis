//the program tells a use
#include <iostream>
#include <string>
using namespace std;
int main(){
    ifstream readme("disorderedfile.dat");
    float value;
    int countme=0;
    while(readme>>value){ //we read in the argument of the while-loop to use the returned logical value, true if the reading success false in different case
    countme++;
    }
    cout<<" we read "<< countme<< "times"<< endl;
    return 0;
}
