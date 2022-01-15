#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero = 0, aux = 0, n1 = 0, n2 = 1;
    string resultado;

    cout << "\nDigite um n�mero inteiro: ";
    cin >> numero;
    system("cls");

    do
    {
        aux = n1 + n2; //Calcula o pr�ximo n�mero

        n1 = n2; //Troca o n�mero 1 em cada itera��o
        n2 = aux; //Troca o n�mero 2 em cada itera��o

        if (aux == numero){ //Verifica o resultado
            resultado = " pertence";
            break; //Quebra o loop caso ache o n�mero desejado
        }else{
            resultado = " N�O pertence";
        }
        
    } while (aux <= (numero)); //Mant�m o loop

    cout << "\n\nO n�mero " << numero << resultado <<" a sequ�ncia de Fibonacci!\n\n";
    system("pause");

    return 0;
}