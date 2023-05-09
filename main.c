#include<stdio.h> 
#include<string.h> 
#include"pousada.h"
#include"quarto.h"

int main(void)
{
    system("clear");
    Pousada *p = cria_pousada();
    imprime_pousada(p);
    Quarto *q = ponteiro_quarto(p);
    int i,quant_quartos = quantidade_quarto(p);
    for(i = 0; i < quant_quartos; i++){
        q = cria_quarto(q);
    }
    imprime_quartos(q, quant_quartos);

    if(q != NULL){
        int opcao;
        do{
            printf("------------------------\n");
            printf("---      Menu        ---\n");
            printf("------------------------");
            printf("\n");
            printf("[1] - Adicionar Hospede\n");
            printf("[2] - Remover Hospede\n");
            printf("[3] - Listar Hospedes Cadastrados\n");
            printf("[4] - Buscar Hospedes\n");
            printf("[5] - Editar Cadastro de Hospede\n");
            printf("[6] - Consultar Quartos Disponíveis\n");
            printf("[7] - Consultar Quantitativo de Quartos por Status\n");
            printf("[8] - Sair\n");
            printf("Digite Uma Opção:\n");
            scanf(" %d", &opcao);

            switch (opcao)
            {
            case 1:
            
            case 6:
                lista_quartos(q); break;
            case 7:

            case 8:
                break;
            default:printf("Opção Inválida.\n");
            }
        
        }
        while(opcao != 8);
    }

    libera_pousada(p);
    return 0;
}
