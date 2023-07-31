#include <iostream> 
#include <vector>
using namespace std;
#include <string> // be sure to include string if you want to work with strings 


int main(){
int a = 5;
int b = 1;
std::string name = "hi my name is malik whats up bro"; // how to declare strings std::string then variable name
unsigned long int c = 13563534; // if declaring a number longer than 4 billion

if( a < 6){
cout << "a is less than 6" << endl;
} else {
    cout << "a is greater than 6" << endl;
}
cout << (a += b) << endl; // will be 6
cout << a << endl; // a will take the value of 6
cout << -20 * -20 << endl;
cout << ((a % 2 == 0) ? "no" : "yes") << endl; // ternary operator, works just like it would in javascript
cout << sizeof(c) << endl; // gets the total number of bytes in memory this variable stores
cout << sizeof(name) << endl;




    return 0;
}

