#include <iostream>
using namespace std;

int main(){
    int idade1 = 25;
    int idade2 = 30;

    cout << boolalpha;
    cout << "Idade 1 é menor que idade 2? " << (idade1 < idade2) << endl;
    cout << "idade 1 é igual a idade 2? " << (idade1 == idade2) << endl;
    cout << "idade 2 é maior que idade 1?" << (idade2 > idade1) << endl;

    return 0;
}
