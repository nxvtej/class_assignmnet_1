#include <iostream>
using namespace std;

int main() {
    const int SIZE = 4;
    int numbers[SIZE];
    int evenNumbers[SIZE], oddNumbers[SIZE];
    int evenCount = 0, oddCount = 0;

    cout << "Enter " << SIZE << " numbers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] % 2 == 0) {
            evenNumbers[evenCount++] = numbers[i];
        } else {
            oddNumbers[oddCount++] = numbers[i];
        }
    }

    cout << "Even numbers: ";
    for (int i = 0; i < evenCount; i++) {
        cout << evenNumbers[i] << " ";
    }
    cout << endl;

    cout << "Odd numbers: ";
    for (int i = 0; i < oddCount; i++) {
        cout << oddNumbers[i] << " ";
    }
    cout << endl;

    return 0;
}
