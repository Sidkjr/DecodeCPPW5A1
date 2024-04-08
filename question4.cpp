#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[5] = {1,2,2,3,5};
    int length = sizeof(arr) / sizeof(int);
    sort(arr, arr + length);
    bool flag = false;

    for(int i = 0; i < length - 1; i++) {
        if(arr[i] == arr[i+1]) {
            cout << "Duplicate!\n";
            flag = true;
            break;
        }
        else {
            continue;
        }
    }

    if(flag == false) {
        cout << "No duplicates found!\n";
    }
}