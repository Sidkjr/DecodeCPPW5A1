#include <iostream>
using namespace std;

int main() {

    int arr[5] = {1,2,3,4,5};
    int smallest = arr[0];

    int length = sizeof(arr) / sizeof(int);

    for(int i = 0; i < length; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
        else {
            continue;
        }
    }

    cout << "The second largest element is: " << smallest << "\n";
}