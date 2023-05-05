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

Pousada *cria_pousada(void)
{
    char nome[50];
    int quartos;
    char localizacao[50];
    char avaliacao[10];

    printf("\n---CADASTRAR POUSADA---\n");
    printf("Insira os Dados da Pousada:\n");
    printf("Nome:");
    scanf(" %[^\n]s", nome);
    printf("Quantidade de Quartos:");
    scanf(" %d", &quartos);
    printf("Localização da Pousada:");
    scanf(" %[^\n]s", localizacao);
    printf("Avaliação da Pousada:");
    scanf(" %[^\n]s", avaliacao);

    Pousada *p = (Pousada*)malloc(sizeof(Pousada));
    if (p == NULL){
        printf("Erro Ao Alocar Memória\n");
        exit(1);
    }

    strcpy(p->nome, nome);
    p->quartos = quartos;
    strcpy(p->localizacao, localizacao);
    strcpy(p->avaliacao, avaliacao);
    p->quarto = NULL;

    return p;
}

Quarto *retorna_ponteiro(Pousada *p)
{
    return p->quarto;
}

int retorna_quantidade(Pousada *p)
{
    return p->quartos;
}

void imprime_pousada(Pousada *p)
{
    printf("------------------------\n");
    printf("Pousada: %s   \n", p->nome );
    printf("Quantidade de Quartos: %d   \n", p->quartos);
    printf("Localização: %s\n", p->localizacao);
    printf("Avaliação: %s\n", p->avaliacao);
}

void libera_pousada(Pousada *p)
{
    if(p != NULL){
        free(p->quarto);  
        free(p);          
    }
}
