#include <iostream>
#include <list>
using namespace std;

int main () {
    list<string> names = {"Mizan", "Muzahid", "Niloy", "Shanto", "Shakib", "Badhon"};

    // display the elements of the list:
    for (string var: names){
        cout << var << endl;
    }
        return 0;
}