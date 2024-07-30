#include <string>
#include <iostream>
#include <cmath>
using namespace std;


string decimal_to_binary(int number) {
    // figure out how many digits are needed i.e largest dividing power of 2
    int power = 0;
    while (number > pow(2, power)) {
        power++;
    }
    // create string for binary representation
    string binary_string;
    // loop once for each digit subtract powers of 2 from number until number is 0
    for (; power >= 0; power--) {
        // starting from left (most sig. digit), figure out if digit is 1 or 0
        char digit = '0';
        if (number >= pow(2, power)) {
            number -= pow(2, power);
            digit = '1';
        }
        // concatentate
        binary_string.append(1, digit);
    }
    return binary_string;
}


int main() {
    cout << decimal_to_binary(25) << endl;
    cout << decimal_to_binary(39) << endl;
    cout << decimal_to_binary(4) << endl;
    return 0;
}