#include<stdio.h>  
#include<string.h> 
#include<stdlib.h> 
#include"pousada.h"
#include"quarto.h" 

#define NOME "Vila Vista"
#define QUARTOS 5
#define LOCALIZACAO "Brasil"
#define AVALIACAO "Ótimo"

struct pousada
{
    char nome[50];
    int quartos;
    char localizacao[50];
    char avaliacao[10];
    Quarto *quarto;
};

Pousada *cria_pousada(void)
{
    Pousada *p = (Pousada*)malloc(sizeof(Pousada));
    if (p == NULL){
        printf("Erro Ao Alocar Memória\n");
        exit(1);
    }
    strcpy(p->nome, NOME);
    p->quartos = QUARTOS;
    strcpy(p->localizacao, LOCALIZACAO);
    strcpy(p->avaliacao, AVALIACAO);
    p->quarto = NULL;

    return p;
}

void imprime_pousada(Pousada *p)
{
    printf("%s\n", p->nome);
    printf("%d\n", p->quartos);
    printf("%s\n", p->localizacao);
    printf("%s\n", p->avaliacao);
}


void libera_pousada(Pousada *p)
{
    if(p != NULL){
        free(p->quarto);  
        free(p);          
    }
}
