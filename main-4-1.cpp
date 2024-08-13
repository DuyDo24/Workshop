#include <iostream>

extern int secondSmallestSum(int *numbers,int length);
extern void printNumbers(int *numbers,int length);
extern int *readNumbers();


using namespace std;

int main() {
    int *numbers = readNumbers();
    printNumbers(numbers, 10);
    cout << secondSmallestSum(numbers, 10) << endl;
    delete[] numbers;
    return 0;
}