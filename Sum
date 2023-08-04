// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int arraySum(int arr[], int size) {
    int sum=0;
    for (int i = size - 1; i >= 0; i--) {
        sum+=arr[i];
    }
   return sum;
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

    cout<<"Sum of all elements is: "<<arraySum(myArray, size);

    delete[] myArray;

    return 0;
}
