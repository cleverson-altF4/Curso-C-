#include <iostream>
#include <string>


class animal {

    public:
        std::string nome;
        void comendo(){
            std::cout << nome << " O animal está comendo \n";
        }
};

class dogao : public animal { //dogao herda a herança da classe animal 
    public:
        std::string raca;

        void latir(){
            std::cout << nome << "Esta latindo \n";
        }
};

int main(){
    dogao dog;
    dog.nome = "Rex";
    dog.raca = "Labrador";

    std::cout << "Nome: " << dog.nome << "\n";
    std::cout << "Raça: " << dog.raca << "\n";
    dog.comendo();
    dog.latir();

    return 0;  
}