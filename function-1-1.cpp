#include <iostream>

int *readNumbers() {
    int* array = new int[10];
    int n;
    for(int i = 0; i<10;i++) {
        std::cin >> n;
        array[0] = n;
    }
    return array;
};
void printNumbers(int *numbers,int length) {
    for(int i = 0;i<length;i++) {
        std::cout << i << " " << numbers[i] << "\n";
    }


} ;