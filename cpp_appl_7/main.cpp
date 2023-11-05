#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    const int arraySize = 5;  
    int sourceArray[arraySize];  
    int destinationArray[arraySize]; 

    
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    
    for (int i = 0; i < arraySize; i++) {
        sourceArray[i] = std::rand() % 100;  
    }

    int* srcPtr = sourceArray;      
    int* destPtr = destinationArray;  

    
    for (int i = 0; i < arraySize; i++) {
        *destPtr = *srcPtr;  
        destPtr++;  
        srcPtr++;   
    }

   
    std::cout << "Вихідний масив:" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        std::cout << sourceArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Масив призначення після копіювання:" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        std::cout << destinationArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
