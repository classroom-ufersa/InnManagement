#include"quarto.h"

typedef struct pousada Pousada;

Pousada *cria_pousada(void);

Quarto *retorna_ponteiro(Pousada *p);

void imprime_pousada(Pousada *p);

void libera_pousada(Pousada *p);