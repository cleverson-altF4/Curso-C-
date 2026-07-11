#include <iostream>
#include <string>


/*Subrescrita de método (override)*/

class Animal{
    public:

        void fazerSom(){
            std::cout << "Som da misera\n"; 
        }

};

class Cachorro : public Animal{
    public:
        void fazerSom(){
            std::cout << "A misera late\n";
        }
};


int main(){

    Animal A;
    A.fazerSom();
    
    Cachorro b;
    b.fazerSom();
}
