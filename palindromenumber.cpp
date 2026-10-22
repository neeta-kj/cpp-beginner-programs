#include <iostream>
using namespace std;
int main() {
    int num, original, reverse = 0;
    cout<<"Enter your num:";
    cin >> num;
    original = num;
    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    if (original == reverse) {
        cout << "Palindrome";
    }
    else {
        cout << "Not a palindrome";
    }
    return 0;
}
