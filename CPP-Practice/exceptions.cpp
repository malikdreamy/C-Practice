#include <iostream>
#include <string>
#include <typeinfo> // used to get the type of error
#include <stdexcept> // add stdexcept to identify the type of error being thrown
using namespace std;


int main(){

string lang = "C++";
try{
    lang.erase(4,6); // try to erase from string position 4 to 6 but there is none, throwing error

}catch(exception &error){ // using exception &error will catch the error
    cerr << "Exception: " << error.what() << endl;  // error.what() function will let you know the type of error
    cerr << "Error Type:" << typeid(error).name() << endl; // typeid(error).name() is a function that gets the type of error
    //cerr is the same as cout but its only for errors 
}



    return 0;
}