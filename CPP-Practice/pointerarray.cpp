#include <iostream>
using namespace std;


int main(){
    int nums[] = {1,2,3,4,5,6,7,8,9,10,11}; //declare array
    int* ptr = nums;
    int newNum = 13;
    int* nptr = &newNum; // nptr by itself gets the memory address and *nptr gets the value of the memory address
    cout << endl << "nptr " << nptr << " gets " << *nptr << endl;
    cout << endl << "ptr at: " << ptr << " gets " << *ptr; // *ptr gets the value of 1
    ptr++;
    cout << endl << "ptr at: " << ptr << " gets " << *ptr; // *gets value of 2 and so on as it increments through the array using ++ incrementor
    ptr++;
    cout << endl << "ptr at: " << ptr << " gets " << *ptr;
    ptr -= 2; // decrecrement by 2 to get the value of 1 again
    cout << endl << "ptr at: " << ptr << " gets " << *ptr;
    cout << endl;
    for (int i = 0; i < 11; i++){ 
        cout << endl << "Elements: " << &nums; //when using loop it appears to use the same memory address 
        cout << "  Value:" << *ptr;
        ptr++;
    }
cout << endl;



    return 0;
}