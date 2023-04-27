#include<stdio.h>

int main(void)
{
    //Declaração das seguintes variáves:
    int opcao1;

    //Laço de repetição para o menu de opção.
    do{

        //Pergunta ao usuário o que ele deseja.
        printf("------------------------\n");
        printf("---  MENU DE OPÇÕES  ---\n");
        printf("------------------------");
        printf("\n");
        printf("[1] - Adicionar Hospede\n");
        printf("[2] - Remover Hospede\n");
        printf("[3] - Listas Hospedes Cadastrados\n");
        printf("[4] - Buscar Hospedes\n");
        printf("[5] - Editar Cadastro de Hospede\n");
        printf("[6] - Consultar Quarrtos Disponíveis\n");
        printf("[7] - Consultar Quantitativo de Quartos por Status\n");
        printf("[8] - Sair\n");
        printf("Digite Uma Opção:\n");
        scanf(" %d", &opcao1);
    }
    //Condição para sair do laço de repetição.
    while(opcao1 != 8);

    return 0;
}