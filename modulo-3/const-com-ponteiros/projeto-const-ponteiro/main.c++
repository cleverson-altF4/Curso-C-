#include <iostream>
#include "turma.h"


int main(){
    float notasA[5] = {7.5, 5.0, 8.0, 6.5, 4.0};
    int FrequenciasA[5] = {80, 70, 90, 75, 60};

    float notasB[5] = {9.0, 6.0, 5.5, 7.0, 8.5};
    int FrequenciasB[5] = {95, 60, 85, 70, 88};

    float notasC[5] = {4.5, 6.5, 7.0, 5.0, 9.5};
    int FrequenciasC[5] = {55, 75, 80, 65, 92};

    exibirRelatorio(notasA, FrequenciasA, 5, "Turma A");
    exibirRelatorio(notasB, FrequenciasB, 5, "Turma B");
    exibirRelatorio(notasC, FrequenciasC, 5, "Turma C");


}