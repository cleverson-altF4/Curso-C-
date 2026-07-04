#include <iostream>


void exibir(int* ptr){
    if (ptr == nullptr)
    {
        std::cout << "Ptr é nullptr\n";

    } else{
        std::cout << "Valor: " << *ptr << "\n";
        delete ptr;
        

    }
    
    
}

int main(){
    int* valor = new int(99);
    exibir(valor);

    exibir(nullptr);

}