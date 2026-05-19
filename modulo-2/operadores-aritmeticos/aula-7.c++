#include <iostream>
using namespace std;

int main(){
    bool logado = true;
    int nivel = 3;
    bool temAcesso = logado && (nivel > 2);
    cout << "Usuário: " << temAcesso << endl;

    return 0;
}