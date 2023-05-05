#include"quarto.h"

typedef struct pousada Pousada;

Pousada *cria_pousada(char nome[50], int quartos, char localizacao[50], char avaliacao[10]);

Quarto *retorna_ponteiro(Pousada *p);

void imprime_pousada(Pousada *p);

void libera_pousada(Pousada *p);