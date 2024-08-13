#include <iostream>
#include <algorithm>
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
};

int secondSmallestSum(int *numbers,int length) {
    if (length < 1) {return 0;}
    int* sumArray = new int[(length*length+1)/2];{};
    int sumArrayIndex = 0;
    for (int i = 0; i < length; i++) {
        int sum = 0;
        for (int j = i; j < length; j++) {
            sum += numbers[j];
            sumArray[sumArrayIndex] = sum;
            sumArrayIndex++;
        }
    }
    sort(sumArray, sumArray + sumArrayIndex);
    int output = sumArray[1];
    delete[] sumArray;
    return output;
}