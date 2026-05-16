#include <iostream>
#include <string>
using namespace std;

int main(){
    string nome;
    int serie;
    float firmaware;

    cout << "Nome: ";
    getline(cin, nome);

    cout << "Serie: ";
    cin >> serie;

    cout << "Firmaware: ";
    cin >> firmaware;
    
    cout << "===== DRONE ID ====\n";
    cout << "Nome: " << nome << "\n";
    cout << "Serie: " << serie << "\n";
    cout << "Firmare: " << firmaware << "\n";
    
    
    return 0;
}