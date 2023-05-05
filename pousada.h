#include"quarto.h"

typedef struct pousada Pousada;

Pousada *cria_pousada(void);

Quarto *ponteiro_quarto(Pousada *p);

int quantidade_quarto(Pousada *p);

void imprime_pousada(Pousada *p);

void libera_pousada(Pousada *p);