//Implementação das funções do módulo aluno.h.

#include<stdio.h>  //Biblioteca de entrada e saída.
#include<string.h> //Biblioteca de funções para manipular strings.
#include<stdlib.h> //Biblioteca de funções para alocação dinâmica.
#include"pousada.h"  //Módulo criado.

//Implementação da srtuct Pousada.
struct pousada
{
    char nome[50];
    int quartos;
    int localização;
    char avalização[10];
}

