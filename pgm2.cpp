#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Enter nuber to check : ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "Number is even";
    } else {
        cout << "Number is odd";
    }

    return 0;
}
