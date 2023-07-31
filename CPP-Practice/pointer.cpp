#include <iostream>
#include <string>
using namespace std;


int main(){
    int a = 8, b = 16;
    int* aPtr = &a;  // * means it stores the memory address of a and b in variables aPtr and bPtr
    int* bPtr = &b;
   cout << "Address of pointers aPtr " << &aPtr << endl;
   cout << "Address of pointers bPtr " << &bPtr << endl;
   cout << "Values of pointers aPtr " << aPtr << endl;
      cout << "Values of pointers bPtr " << bPtr << endl;
      cout << "Values in the address of aPtr " << *aPtr << endl;
      cout << "Values in address of bPtr " << *bPtr << endl;



    return 0;
}