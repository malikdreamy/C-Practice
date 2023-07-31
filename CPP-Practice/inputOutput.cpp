#include <iostream>
using namespace std;

int main(){
bool isTrue = 1;
int num = 26;
cout.width(40);
cout.fill('.'); // fills the cout with 50 periods
cout << "Output" << endl;
cout.precision(8); // only will display 8 characters 
cout << "PI:" << 3.1415926536 << endl;
cout << isTrue << ":" << boolalpha << isTrue << endl; // boolalpha converts 1 to its boolean value which is true
cout << num << ":" << hex << showbase << num << endl; // hex and showbase gets the hex decimal of the number




    return 0;
}