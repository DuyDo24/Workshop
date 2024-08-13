#include <iostream>

extern int *readNumbers();
extern void printNumbers(int *numbers,int length);
extern void hexDigits(int *numbers,int length);
int main() {
    int* array = readNumbers();
    printNumbers(array,10);
    hexDigits(array,10);
    delete array;
}