Reverse

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void arrayReverse(int arr[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        std::cout << arr[i] << " ";
    }
    cout <<endl;
}

void inputElements(int arr[], int size) {
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int* myArray = new int[size];

    inputElements(myArray, size);

    arrayReverse(myArray, size);

    delete[] myArray;

    return 0;
}
