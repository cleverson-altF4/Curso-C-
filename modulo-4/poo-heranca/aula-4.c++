#include <iostream>
#include <string>


/*Múltiplas classes derivadas*/

class funcionario{ //Classe
    private:
        std::string nome;
        double salario;


    public:

        funcionario(std::string Name, double valor){ //Construtor
            nome = Name;
            salario = valor;
        }


    std::string getNome(){ //getters
        return nome;
    }

    double getSalario(){
        return salario;

    }

    void setNome(std::string Name) { //setters
        nome = Name;
    }

    void setSalario(double valor){
        salario = valor;
    }


    void exibir(){
        std::cout << "Nome: " << nome << "\n";
        std::cout << "Salário R$: " << salario << "\n";
    }

};


class gerente : public funcionario { //Herança do funcionário
    

    public:
        int equipe;

        gerente(std::string Name, double valor, int pessoa) : funcionario (Name, valor){

            equipe = pessoa;

        }


};



int main(){

}