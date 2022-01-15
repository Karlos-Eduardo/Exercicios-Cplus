#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero = 0, aux = 0, n1 = 0, n2 = 1;
    string resultado;

    cout << "\nDigite um número inteiro: ";
    cin >> numero;
    system("cls");

    do
    {
        aux = n1 + n2; //Calcula o próximo número

        n1 = n2; //Troca o número 1 em cada iteração
        n2 = aux; //Troca o número 2 em cada iteração

        if (aux == numero){ //Verifica o resultado
            resultado = " pertence";
            break; //Quebra o loop caso ache o número desejado
        }else{
            resultado = " NÃO pertence";
        }
        
    } while (aux <= (numero)); //Mantém o loop

    cout << "\n\nO número " << numero << resultado <<" a sequência de Fibonacci!\n\n";
    system("pause");

    return 0;
}