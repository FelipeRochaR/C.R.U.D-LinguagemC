#include<stdio.h>
#include<string.h>
#include "sorvete.h"

int totalSorvetesAdicionados = 0;
int totalCondimentosAdicionados = 0;

void adicionarS(){
    int produtos;
    Sorvete tm_sorvete;
    Condimento tm_condimento;
    char repet;

    do {
        printf("\n====================================\n");
        printf("        Adicionar Produtos        \n");
        printf("====================================\n");
        printf("1. Adicionar Sorvete \n");
        printf("2. Adicionar Condimento \n");
        printf("3. Voltar\n");
        printf("====================================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &produtos);
        getchar();
        switch(produtos){
            case 1:
                printf("======== Adicionar Sorvete =========\n");
                printf("Qual o Sabor: ");
                fgets(tm_sorvete.sabor, sizeof(tm_sorvete.sabor), stdin);
                tm_sorvete.sabor[strcspn(tm_sorvete.sabor, "\n")] = 0;
                printf("Qual o preco: ");
                scanf("%f", &tm_sorvete.preco);
                getchar();
                printf("Qual a data de validade (DIAS): ");
                scanf("%d", &tm_sorvete.validade);
                getchar();
                printf("Qual a quantidade (UN): ");
                scanf("%d", &tm_sorvete.quantidade);
                getchar();

                if (adicionarSorvete(tm_sorvete) == -1) {
                    printf("Nao e possivel adicionar mais sorvetes.\n");
                    system("pause");
                    system("cls");
                }else{
                    totalSorvetesAdicionados += tm_sorvete.quantidade;
                }
                break;
            case 2:
                system("cls");
                printf("====== Adicionar Condimento ======\n");
                printf("Qual o condimento: ");
                fgets(tm_condimento.sabor, sizeof(tm_condimento.sabor), stdin);
                tm_condimento.sabor[strcspn(tm_condimento.sabor, "\n")] = 0;
                printf("Qual o preco: ");
                scanf("%f", &tm_condimento.preco);
                getchar();
                printf("Qual a data de validade (DIAS): ");
                scanf("%d", &tm_condimento.validade);
                getchar();
                printf("Qual a quantidade (UN): ");
                scanf("%d", &tm_condimento.quantidade);
                getchar();

                if(adicionarCondimento(tm_condimento) == -1){
                    printf("Nao e possivel adicionar mais condimentos.\n");

                    system("pause");
                    system("cls");
                }else{
                    totalCondimentosAdicionados += tm_condimento.quantidade;
                }
                break;
            case 3:
                    system("cls");
                    return;
                break;
            default:
                printf("Opcao Invalida.\n");
                system("pause");
                system("cls");
        }

        printf("Deseja adicionar outro produto? (S/N) ");
        scanf(" %c", &repet);
        getchar();
        system("cls");
    } while (repet == 'S' || repet == 's');
    system("cls");
}
