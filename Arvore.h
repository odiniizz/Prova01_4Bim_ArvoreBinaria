#include <iostream>
class Arvore{
    public:
        int Numero;
        Arvore* dir, *esq;
        Arvore* Gerar(Arvore*, int);
        void ExibirPreOrdem (Arvore*);
        Arvore* Esvaziar (Arvore*);
        Arvore* ConferirGrau (Arvore*, int*);
        Arvore* ConferirPrimos (Arvore*, int*);
        bool Primos (int);
};
