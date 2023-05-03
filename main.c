#include<stdio.h> 
#include<string.h> 
#include"inn.h"  

int main(void){
    int opcao1;

    do{
        printf("------------------------\n");
        printf("---  MENU DE OPÇÕES  ---\n");
        printf("------------------------");
        printf("\n");
        printf("[1] - Adicionar Hospede\n");
        printf("[2] - Remover Hospede\n");
        printf("[3] - Listar Hospedes Cadastrados\n");
        printf("[4] - Buscar Hospedes\n");
        printf("[5] - Editar Cadastro de Hospede\n");
        printf("[6] - Consultar Quarrtos Disponíveis\n");
        printf("[7] - Consultar Quantitativo de Quartos por Status\n");
        printf("[8] - Sair\n");
        printf("Digite Uma Opção:\n");
        scanf(" %d", &opcao1);

        switch (opcao1){
        case 1:
            printf("Informe o nome do hospede: ");
            scanf(" %[^\n]s", nome);
            l = lista_insere(l, nome); // Insere o novo hospede na lista
            l = ordena_lista(l); // Ordena a lista
            escreve_lista(l, "hospedes.txt"); // Escreve a lista no arquivo
            break;
        case 8:
            break;
        default:printf("Opção Inválida.\n");
        }
        
    }

    while(opcao1 != 8);
    return 0;
}