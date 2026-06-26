#include <iostream>

int main(){

    int array[5] = {10,20,30,40,50};
    int *ptr = array;

    std::cout << "primeiro número: " << *ptr << "\n";
    std::cout << "segundo número: " << *(ptr + 1) << "\n";


    return 0;
}
