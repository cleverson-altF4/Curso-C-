#include <iostream>



class minhaEsposa {
    public:
        virtual void faz(){
            std::cout << "Ela come igual uma desgramada\n";
            std::cout << "Trabalha\n";
            std::cout << "Gasta o dinheiro do trabalho\n";
            std::cout << "E ainda pega o meu kk\n";
        
        }

        virtual void fazer(){
            std::cout << "----------------\n";
        }
};

class marido : public minhaEsposa{

    public:
        virtual void faz(){
            std::cout << "Trabalho\n";
            std::cout << "cago\n";
            std::cout << "me alimento\n";
        }
};

class keka : public minhaEsposa{

    public:
        virtual void faz(){
            std::cout << "Quer café?\n";
            std::cout << "Fiu\n";
            std::cout << "Caga\n";
            std::cout << "Fiu de novo\n";
        }


}; 


int main(){

    minhaEsposa* ela[3];

    ela[0] = new marido();
    ela[1] = new keka();
    ela[2] = new minhaEsposa();

    for (int i = 0; i < 3; i++)
    {
        ela[i] -> fazer();
        ela[i] -> faz(); // -> ele aponta para onde está localizada
        
    }
    
    delete ela[0];
    delete ela[1];
    delete ela[2];
    return 0;
     
}