#include<stdio.h>  
#include<string.h> 
#include<stdlib.h> 
#include"pousada.h"
#include"quarto.h" 


struct pousada
{
    char nome[50];
    int quartos;
    char localizacao[50];
    char avaliacao[10];
    Quarto *quarto;
};

Pousada *cria_pousada(char nome[50], int quartos, char localizacao[50], char avaliacao[10])
{
    Pousada *p = (Pousada*)malloc(sizeof(Pousada));
    
    if (p == NULL){
        printf("Erro Ao Alocar Memória\n");
        exit(1);
    }

    strcpy(p->nome, nome);
    p->quartos = quartos;
    strcpy(p->localizacao, localizacao);
    strcpy(p->localizacao, avaliacao);
    p->quarto = NULL;

    return p;
}

Quarto *retorna_ponteiro(Pousada *p)
{
    return p->quarto;
}

void imprime_pousada(Pousada *p)
{
    printf("------------------------\n");
    printf("Pousada: %s   \n", p->nome );
    printf("Quantidade de Quartos: %d   \n", p->quartos);
    printf("Localização: %s\n", p->localizacao);
    printf("Avaliação: %s\n", p->avaliacao);
    printf("------------------------\n");
}


void libera_pousada(Pousada *p)
{
    if(p != NULL){
        free(p->quarto);  
        free(p);          
    }
}
