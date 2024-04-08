#include <iostream>
using namespace std;

int main() {
    int array[5] = {1,2,3,4,5};
    int length = sizeof(array) / sizeof(int);

    int product = 1;

    for(int i = 0; i < length; i++) {
        product = product * array[i]; 
    }
    cout << product << "\n";
}