#include <iostream>
using namespace std;

int main() {

    int arr[5] = {1,2,3,4,5};
    int second_largest = arr[0];
    int largest = arr[0];

    int length = sizeof(arr) / sizeof(int);

    for(int i = 0; i < length; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else {
            continue;
        }
    }

    cout << "The second largest element is: " << second_largest << "\n";
}