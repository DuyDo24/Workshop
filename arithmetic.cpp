#include <iostream>
#include <string>
using namespace std;

string add_binary(const string& a, const string& b) {
    string result = "";
    int carry = 0;

    int a_len = a.length();
    int b_len = b.length();

    string a_padded = string(b_len - a_len, '0') + a;
    string b_padded = string(a_len - b_len, '0') + b;

    int n = a_padded.length();

    for (int i = n - 1; i >= 0; --i) {
        int bit_a = a_padded[i] - '0';
        int bit_b = b_padded[i] - '0';

        int sum = bit_a + bit_b + carry;
        carry = sum / 2;
        sum = sum % 2;

        result = ::to_string(sum) + result;
    }

    if (carry) {
        result = "1" + result;
    }

    return result;
}

int main() {
string binary1 = "1101"; 
string binary2 = "1011"; 

    cout << "Addition: " << add_binary(binary1, binary2) << endl;
 
    return 0;
}