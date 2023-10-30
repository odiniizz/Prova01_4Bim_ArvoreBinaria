#include "Arvore.h"

Arvore* Arvore::Gerar(Arvore *R, int N){
    Arvore *novo, *aux = R;
    if (aux == NULL){
        novo = new Arvore();
        novo->Numero = N;
        novo->esq = NULL;
        novo->dir = NULL;
        aux = novo;
    } else if (N < aux->Numero){
        aux->esq = Gerar(aux->esq, N);
    } else {
        aux->dir = Gerar(aux->dir, N);
    }
    return aux;
};

void Arvore::ExibirPreOrdem (Arvore *R){
    Arvore *aux = R;
    if (aux != NULL){
        std::cout << aux->Numero << " ";
        ExibirPreOrdem(aux->esq);
        ExibirPreOrdem(aux->dir);
    }
};

Arvore* Arvore::Esvaziar (Arvore *R){
    if (R == NULL)
        return R;
    Esvaziar (R->esq);
    Esvaziar (R->dir);
    delete (R);
    R = NULL;
};

Arvore* Arvore::ConferirGrau (Arvore *R, int *D){
    if (R != NULL){
        ConferirGrau(R->esq, D);
        if (R->esq != NULL && R->dir != NULL){
            (*D)++;
        }
        ConferirGrau(R->dir, D);
    }
};

Arvore* Arvore::ConferirPrimos(Arvore *R, int *P){
    Arvore *aux = R;
    if (aux != NULL){
        ConferirPrimos(aux->esq, P);
        if ((Primos(aux->Numero)) && ((aux->Numero > 10) && (aux->Numero < 100))){
                (*P)++;
        }
        ConferirPrimos(aux->dir, P);
    }
};

bool Arvore::Primos (int valor){
    int conferir = 0;
    for (int i = 2; i <= valor; i++){
        if (valor % i == 0){
            conferir++;
        }
    }
    if (conferir == 1){
        return true;
    } else {
        return false;
    }
};
