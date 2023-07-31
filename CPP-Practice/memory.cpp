#include <iostream>
#include <string>
using namespace std;

int main(){
 int var = 8;
 string text = "C++ is fun";
 double sum = 0.0243543454;
cout << "num variable " << &var << endl; //& sign gets the memory address of the variable
cout << "double sum " << &sum << endl;
cout << "text " << &text << endl;

return 0;
}