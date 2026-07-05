#include <iostream>
#include <string>

class aluno {
    public:
        std::string nome = "Clevison";
        int idade = 31;
        float altura = 1.71;
        bool fuma = false;

};
    


int main(){
    
    aluno peste;

    std::cout << "Nome do cabra: " << peste.nome << "\n";
    std::cout << "Idade: " << peste.idade << "\n";
    std::cout << "Altura: " << peste.altura << "\n";
    std::cout << "O cabra fuma? " << peste.fuma << "\n";
    std::cout << "-----------------------\n";


    return 0;

}

