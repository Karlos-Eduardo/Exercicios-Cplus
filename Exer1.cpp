#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL,"Portuguese");

    int INDICE = 13, SOMA=0, K=0;

    while (K < INDICE)
    {
        K++;

        SOMA = SOMA + K; //Acumula o resultado da soma
    }
    
    cout << "Soma: " << SOMA; //Exibe o resultado

    return 0;
}