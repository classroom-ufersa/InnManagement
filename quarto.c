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
        printf("-------------------------\n");
        printf("Tipo: %s\n", quartos->tipo);
        printf("Número: %d\n", quartos->numero);
        printf("Preço: R$ %.2f\n", quartos->preco);
        printf("Status: %s\n", quartos->status);
        system("clear");
        i++;
    }
}

void lista_quartos(Quarto *q)
{

    printf("Quartos disponíveis:\n");
    while (q != NULL)
    {
        if (strcmp(q->status, "disponível") == 0){
            printf("Tipo: %s\n", q->tipo);
            printf("Número: %d\n", q->numero);
            printf("Preço: %.2f\n", q->preco);
            printf("--------\n\n\n");
        }
        q = q->prox;
    }
}


