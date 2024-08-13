#include <iostream>

int *readNumbers() {
    int* array = new int[10];
    int n;
    for(int i = 0; i<10;i++) {
        std::cout << " ";
        std::cin >> n;
        array[i] = n;
    }
    return array;
};
void printNumbers(int *numbers,int length) {
    for(int i = 0;i<length;i++) {
        std::cout << i << " " << numbers[i] << "\n";
    }


} ;
void hexDigits(int *numbers,int length){
    for(int i = 0;i<length;i++){
        std::cout << i << " " << numbers[i] << " ";
        if(numbers[i] >= 0 && numbers[i] <= 9){
            std::cout << numbers[i];
        }
        else {
            switch(numbers[i]){
                case 10:
                    std::cout << "A";
                    break;
                case 11:
                    std::cout << "B";
                case 12:
                    std::cout << "C";
                    break;
                case 13:
                    std::cout << "D";
                    break;
                case 14:
                    std::cout << "E";
                    break;
                case 15:
                    std::cout << "F";
                    break;
                case 16:
                    std::cout << "G";
                    break;
                case 17:
                    std::cout << "H";
                    break;
                case 18:
                    std::cout << "I";
                    break;
                case 19:
                    std::cout << "J";
                    break;
                case 20:
                    std::cout << "K";
                    break;
                case 21:
                    std::cout << "L";
                    break;
                case 22:
                    std::cout << "M";
                    break;
                case 23:
                    std::cout << "N";
                    break;
                case 24:
                    std::cout << "O";
                    break;
                case 25:
                    std::cout << "P";
                    break;
                case 26:
                    std::cout << "Q";
                    break;
                case 27:
                    std::cout << "R";
                    break;
                case 28:
                    std::cout << "S";
                    break;
                case 29:
                    std::cout << "T";
                    break;
                case 30:
                    std::cout << "U";
                    break;
                case 31:
                    std::cout << "V";
                    break;
                case 32:
                    std::cout << "W";
                    break;
                case 33:
                    std::cout << "X";
                    break;
                case 34:
                    std::cout << "Y";
                    break;
                case 35:
                    std::cout << "Z";
                    break;
                default:
                    std::cout << " ";
                    break;
            
            }
        }

        std::cout << "\n";
    }
} ;