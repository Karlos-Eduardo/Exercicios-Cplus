#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL,"Portuguese");

    char texto[9999];
    int ncaracter=0; //Números de caracteres 

    cout << "\nDigite o texto: ";
    fflush(stdin);
    gets(texto);
    cout << "\n\n";

    for (int i = 0; texto[i] != '\0'; i++) //Conta quantos caracteres o usuário digitou
    {
        ncaracter++;
    }
    cout << "\n\n";
    for (int i = ncaracter; i >= 0 ; i--) //Exibe o texto ao contrário
    {
        cout << texto[i];
    }
    
    return 0;
}