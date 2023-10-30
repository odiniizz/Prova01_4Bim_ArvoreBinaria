// Prova 01 do 4º Bimestre - Laboratório de Estruturas de Dados - 27/10/2023
//Júlio César Diniz - 2º Informática

#include "Arvore.h"
using namespace std;

void Menu(){
    system ("clear");
    cout << "1. Gerar Árvore Binária\n";
    cout << "2. Apresentar valores pré-ordem\n";
    cout << "3. Esvaziar Árvore\n";
    cout << "4. Apresentar a quantidade de nós que possuem dois filhos\n";
    cout << "5. Apresentar a quantidade de números primos entre 10 e 100\n";
    cout << "6. Finalizar\n";
};

int main(){
    Arvore *Raiz = NULL, obj;
    int aleatorio, op, dois = 0, primos = 0;
    srand(time(NULL));
    do {
        Menu();
        cout << "Digite sua opção: ";
        cin >> op;
        switch (op){
            case 1:
                if (Raiz != NULL){
                    cout << "A Árvore já está preenchida!";
                } else {
                    for (int i = 0; i < 50; i++){
                        aleatorio = rand() % 300;
                        Raiz = obj.Gerar(Raiz, aleatorio);
                    }
                    cout << "A Árvore foi preenchida!";
                }
            break;

            case 2:
                if (Raiz == NULL){
                    cout << "Árvore vazia!";
                } else {
                    cout << "Pré-ordem:\n";
                    obj.ExibirPreOrdem(Raiz);
                }
            break;

            case 3:
                if (Raiz == NULL){
                    cout << "Árvore vazia!";
                } else {
                    obj.Esvaziar(Raiz);
                    cout << "A Árvore foi esvaziada!";
                }
            break;

            case 4:
                if (Raiz == NULL){
                    cout << "Árvore vazia!";
                } else {
                obj.ConferirGrau(Raiz, &dois);
                cout << "A árvore binária gerada contém " << dois << " nós que possuem dois filhos!";
                }
            break;

            case 5:
                if (Raiz == NULL){
                    cout << "Árvore vazia!";
                } else {
                obj.ConferirPrimos(Raiz, &primos);
                cout << "A Árvore Binária gerada contém " << primos << " números primos entre 10 e 100!";
                }
            break;

            case 6:
                cout << "O programa será finalizado.\n";
            break;

            default:
                cout << "Opção inválida!!!\n";
        }
        cout << "\nTecle ENTER para continuar.\n";
        cin.ignore().get();
    } while (op != 6);
}
