#include <iostream>
#include <vector>
using namespace std;

int main () {

    vector<int> numbers (5, 20);

    // display the vector elements:
    for (int number: numbers){
        cout << number << endl;
    }

    return 0;
}