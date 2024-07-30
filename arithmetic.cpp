#include <iostream>
#include <string>
using namespace std;

string add_binary(const std::string& a, const std::string& b) {
    std::string result = "";
    int carry = 0;

    int a_len = a.length();
    int b_len = b.length();

    std::string a_padded = std::string(b_len - a_len, '0') + a;
    std::string b_padded = std::string(a_len - b_len, '0') + b;

    int n = a_padded.length();

    for (int i = n - 1; i >= 0; --i) {
        int bit_a = a_padded[i] - '0';
        int bit_b = b_padded[i] - '0';

        int sum = bit_a + bit_b + carry;
        carry = sum / 2;
        sum = sum % 2;

        result = std::to_string(sum) + result;
    }

    if (carry) {
        result = "1" + result;
    }

    return result;
}

int main() {
std::string binary1 = "1101"; 
std::string binary2 = "1011"; 

    std::cout << "Addition: " << add_binary(binary1, binary2) << std::endl;
 
    return 0;
}