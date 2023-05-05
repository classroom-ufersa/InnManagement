#include<stdio.h>  
#include<string.h> 
#include<stdlib.h> 
#include"quarto.h"  

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

