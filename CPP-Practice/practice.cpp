#include <iostream> // preprocessor statement, used to do cout, input output
#include <vector>
using namespace std; // is a directive that allows you to access all the names (such as classes, functions, and objects) defined in the std namespace without explicitly specifying the namespace.

int main() {
    char letter; letter = 'A'; //string
    int number; number = 100; //integer
    float decimal = 7.556; //decimal
    double pi = 3.14; //double number
    bool isTrue = true; //boolean
    enum {RED = 1, YELLOW, GREEN, BROWN}; //using enum makes everything in it have a int value, where the next is plus one of the preceeding one
    char name[5] = {'m', 'i', 'k', 'e', '\0'}; //array with strings
    int coords[2][3] = {{1,2,3},{4,5,6}}; //two dimensional array
    vector <int> vec (3, 100);
    cout << "char letter:" << letter << endl;
    cout << "int number" << number << endl;
    cout << "pi:" << pi << endl;
    cout << "bool: " << isTrue << endl;
    cout << "name: " << name << endl;
    cout << "coords " << coords[0][0] << endl;
    cout << "coords " << coords[1][2] << endl;
    cout << "vector " << vec.size() << endl;
    cout << "enum red " << RED << endl;
    return 0;
}
