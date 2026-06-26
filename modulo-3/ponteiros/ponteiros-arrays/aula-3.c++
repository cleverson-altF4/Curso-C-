/*Modificando o array*/

#include <iostream>

int main(){
    int array[5] = {1,2,3,4,5};
    int *ptr = array;


    *(ptr + 4) = 1000;

    for (int i = 0; i < 5; i++)
    {
        std::cout << " " << i + 1 << " posição de cada array: " << *(ptr + i) << "\n";
    }
    
    return 0;
}