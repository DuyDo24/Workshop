#include <iostream>
using namespace std;


int *readNumbers() {
    int* array = new int[10];
    int n;
    for(int i = 0; i<10;i++) {
        cin >> n;
        array[i] = n;
    }
    return array;
};

void printNumbers(int *numbers,int length) {
    for(int i = 0;i<length;i++) {
        cout << i << " " << numbers[i] << "\n";
    }
} ;

bool equalsArray(int *numbers1,int *numbers2,int length) {
    if (length < 0) {
        return false;
    }
    for (int i = 0; i <length;i++) {
        if (numbers1[i] != numbers2[i]) {
            return false;
        }
    }
    return true;
}   