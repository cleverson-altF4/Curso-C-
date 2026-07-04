#include <iostream>
#include <string>

int main(){
    std::string nome = ("Clevison");
    int* idade = new int(25);
    float* altura = new float(1.75);
    bool* ativo = new bool(true);

    std::cout << "Nome " << nome << "\n";
    std::cout << "Idade: " << *idade << "\n";
    std::cout << "Altura: " << *altura << "\n";
    std::cout << "Ativo: " << *ativo << "\n";

    delete idade;
    idade = nullptr;

    delete altura;
    altura = nullptr;

    delete ativo;
    ativo = nullptr;

    return 0;
}