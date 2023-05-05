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

/*Quarto *cria_quarto(Quarto *q, int quant)
{
   
}
*/