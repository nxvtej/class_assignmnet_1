
#include <iostream>
using namespace std;

int main() {
    char ch = 'a';

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }
        ch = 'a';
        cout << endl;
    }
     for (int i = 4; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }
        ch = 'a';
        cout << endl;
    }

    return 0;
}
