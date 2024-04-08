#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,4,5,7};
    int length = sizeof(arr) / sizeof(int);
    bool flag = false;
    for(int i = 0; i < length - 1; i++) {
        if(arr[i] + 1 != arr[i+1] && arr[i] != arr[i+1]) {
            cout << "The smallest missing positive number is: " << arr[i] + 1 << "\n";
            flag = true;
            break;
        }
        else {
            continue;
        }
    }

    if(flag == false) {
        cout << "No Values are missing!";
    }
}