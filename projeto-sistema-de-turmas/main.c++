#include <iostream>
#include "turma.h"


int main(){
    float turmaA[5] = {7.5, 5.0, 8.0, 6.5, 4.0};
    float resultado = media_notas(turmaA, 5);

    std::cout << "Média da turma A: " << resultado << "\n";
}