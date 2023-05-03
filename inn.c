//Implementação das funções do módulo aluno.h.

#include <stdio.h>  //Biblioteca de entrada e saída.
#include <string.h> //Biblioteca de funções para manipular strings.
#include <stdlib.h> //Biblioteca de funções para alocação dinâmica.
#include "inn.h"  //Módulo criado.

typedef struct pousada
{
    char nome[50];
    struct quarto quartos[30];
    char localização[50];
    char avaliação[10];
}pousada;

typedef struct quarto
{
    char tipo[20];
    int numero;
    char hospede[50];
    float preco;
    char status[15];
    int duracao_estadia;
}Quarto;

typedef struct lista
{
    struct quarto quarto;
    struct lista *prox;
}Lista;

void registra_pousda()
{
    char nome_pousada[50];

}
