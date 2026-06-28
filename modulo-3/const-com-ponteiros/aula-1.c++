/*O que é const com ponteiros?
Lembra que ponteiros permitem modificar o valor original através de *ptr = x? O const serve para bloquear isso quando você não quer correr esse risco.*/

#include <iostream>

int main(){
    float numero = 10.4; //
    const float *ptr = &numero;  //O valor apontado não pode mudar

    //*ptr = 10; esse valor não pode ser mudado

    std::cout << "*ptr: " << *ptr << "\n"; 


}