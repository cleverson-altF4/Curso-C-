/*Percorrendo arrays*/

#include <iostream>

int main(){
    int array[5] = {10, 20, 30, 40, 50};
    int *ptr = array;

    for (int i = 0; i < 5; i++)
    {
        std::cout << " " << i + 1 << " posição de cada array: " << *(ptr + i) << "\n";

    }
    
    return 0;
}