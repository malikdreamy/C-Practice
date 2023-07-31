#include <iostream> 
#include <vector>
using namespace std;
#include <string>

int main(){

int i;
for (i = 0; i < 5; i++){
cout << "hello from loop" << i << endl; // a loop is performed literally exactly like javacript
}

int j = 0;
vector <int> vec(10); // while loops also work the same in javascript
while (j < vec.size()){
    j++;
    if (j == 3){continue;} // skip over 3rd iteration with continue 
    vec[j-1] = j;
    cout << " | " << vec.at(j-1);

}



return 0;
}