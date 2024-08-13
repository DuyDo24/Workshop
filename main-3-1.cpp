#include <iostream>
using namespace std;


extern int *readNumbers();
extern void printNumbers(int *numbers,int length);
extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main() {
    int length = 10;
    int* numbers1 = readNumbers();
    cout << "Please enter the next set of numbers " << endl;
    int* numbers2 = readNumbers();
    cout << equalsArray(numbers1,numbers2,length) << endl;
    bool result = equalsArray(numbers1, numbers2, length);
    cout << (result ? "true" : "false") << endl;
    delete[] numbers1;
    delete[] numbers2;
}