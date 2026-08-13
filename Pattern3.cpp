#include <iostream>
using namespace std;

int main() {
    int n, reverse = 0, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        int digit = n % 10;

        reverse = reverse * 10 + digit;
        sum = sum + digit;

        n = n / 10;
    }

    cout << "Reverse = " << reverse << endl;
    cout << "Sum of digits = " << sum << endl;

    return 0;
}