#include <iostream>
//Uso do new e delete

int main(){
   
   
   int *ponteiro = new int(42);
   std::cout << *ponteiro << "\n";
   delete ponteiro;
   ponteiro = nullptr;

   return 0;
}