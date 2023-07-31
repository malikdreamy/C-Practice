#include <iostream>
using namespace std;

int main(){

    int number;
    try{
        for (number = 1; number < 21 ; number++){
            if (number > 4) throw (number); // if number is greater than four throw exception
         cout << "Number:" << number << endl;
          
        }


    }catch(int num){ //declare what type of error you would be catching, so here it is a number
        cout << "Exception at:" << num << endl;
    }



    return 0;
}