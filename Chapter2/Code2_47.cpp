//the program tells a user which number is larger
#include <iostream>
#include <string>
using namespace std;
int main(){
 string decision;
  do{
     float first, second;
     cout<<"please give me two real numbers"<<endl;
     cin>>first>>second;
     if(first>second){
        cout<<"the first number is larger than the second"<<endl;
     }
     else{
        cout<<"the second number is larger than the first"<<endl;
     }
  cout<<" Do you want to compare another two numbers?"<<endl;
   cin >>decision;
   while(decision != "yes" && decision != "not"){
      cout<<"Sorry I do not understand! Please answer yes or not"<<endl;
      cin>>decision;
   }
  }while(decision =="yes");
￼
 return 0;
}
