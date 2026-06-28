/*Const com ponteiros*/

#include <iostream>

int main(){
    float numero = 10;
    const float *ponteiro = &numero;

    //*ponteiro = 11; não pode ser moodificado quando é passado o const - tipo - *ponteiro = &valor.

    return 0;
}