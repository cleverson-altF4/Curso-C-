#include <iostream>


class Animal{
    public:
        virtual void fazerSom(){
            std::cout << "Som genérico\n";
        }
};

class Cachorro : public Animal{

    public:
        virtual void fazerSom(){
            std::cout << "Cachorro latiu\n";
        }
};

class Gato : public Animal{
    public:
        virtual void fazerSom(){
            std::cout << "Gato miando\n";
        }
}; 

class Vaca : public Animal{

    public:
        virtual void fazerSom(){
            std::cout << "Vaca faz Mu\n";
        }
};


int main(){

    Animal* animais[3];

    animais[0] = new Cachorro();
    animais[1] = new Gato();
    animais[2] = new Vaca();

    for (int i = 0; i < 3; i++)
    {
        animais[i] -> fazerSom(); // Uso do -> ele aponta para o que ele tem que fazer

    }

    delete animais[0];
    delete animais[1];
    delete animais[2];
    
    return 0;
    
}