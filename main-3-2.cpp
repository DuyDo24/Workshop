#include <iostream>
using namespace std;


extern int *readNumbers();
extern void printNumbers(int *numbers,int length);
extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int *reverseArray(int *numbers1,int length) ;


int main() {
    int length = 11;
    int* numbers1 = readNumbers();
    int *reverse = reverseArray(numbers1,length);
    printNumbers(reverse,length);
    delete[] numbers1;
    delete[] reverse;
}