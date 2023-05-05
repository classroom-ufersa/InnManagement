#include<stdio.h>  
#include<string.h> 
#include<stdlib.h> 
#include"quarto.h"
#include"pousada.h"

struct quarto
{
    char tipo[20];
    int numero;
    char hospede[50];
    float preco;
    char status[15];
    int duracao_estadia;
    struct quarto *prox;
};

void *cria_quarto(Quarto *q)
{
    char tipo[20];
    int numero;
    float preco;
    char status[15];
    Quarto *novo = (Quarto*)malloc(sizeof(Quarto));

    printf("Insira os Dados dos Quartos:\n");
    printf("Tipo:");
    scanf(" %[^\n]s", tipo);
    printf("Número:");
    scanf(" %d", &numero);
    printf("Preço:");
    scanf(" %f", &preco);
    printf("Status:");
    scanf(" %[^\n]s", status);
    strcpy(novo->tipo, tipo);
    novo->numero = numero;
    novo->preco = preco;
    strcpy(novo->status, status);
    novo->prox = q;
    return novo;
}

void imprime_quartos(Quarto *q, int quant_quartos)
{
    Quarto *quartos;
    int i;
    for(quartos = q; i < quant_quartos; quartos->prox){
        printf("Tipo: %s\n", quartos->tipo);
        printf("Tipo: %d\n", quartos->numero);
        printf("Tipo: %f\n", quartos->preco);
        printf("Tipo: %s\n", quartos->status);
        i++;
    }
}


