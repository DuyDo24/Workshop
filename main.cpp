#include "workshop.h"
#include <iostream>
using namespace std;

extern double* dynamicArray(int N, double M);
extern double arrayMax(double* array, int size);

int main() {
    int N = 10; 
    int max = 0;
    double M = 5;
    double* array = dynamicArray(N, M);

    for (int i = 0;i < N; i++){
        cout << *array << " ";
    }
    cout << endl;

    delete[] array;
    return 0;
}