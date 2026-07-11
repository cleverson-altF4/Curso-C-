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


class gerente : public funcionario { //gerente herda do funcionário
    

    public:
        int equipe;

        gerente(std::string Name, double valor, int pessoa) : funcionario (Name, valor){ //Herda do funcionário certas funcionalidades e o funcionário continua com os demais 

            equipe = pessoa;

        }

        void exibirCompleto(){
            exibir();
            std::cout << "Equipe: " << equipe << "\n";

        }


        double calculcarBonus(){
            // função que retorna salario
            return getSalario() * 0.20;
        }


};


class vendedor : public funcionario { //Vendedor herda do funcionário
    public:

        double comissao;

        vendedor(std::string Name, double valor, double Comissao) : funcionario(Name, valor){
            comissao = Comissao;
        }

        void exibirCompleto(){
            exibir();
            std::cout << "Comissão R$: " << comissao << "\n";
        }

        double calcularTotal(){
            return getSalario() + comissao;
            
        }

        void 


};



int main(){
    gerente pessoa1("Clevison", 750.00, 1);
    vendedor vendedor1("Fulano", 400, 20);
    vendedor vendedor2("Cigano", 550.00, 350.00);
    vendedor1.exibirCompleto();
    vendedor2.exibirCompleto();


    return 0;


}