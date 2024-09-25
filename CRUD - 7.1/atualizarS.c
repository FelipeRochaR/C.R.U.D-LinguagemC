#include<stdio.h>
#include<string.h>
#include "sorvete.h"

void atualizarS(){
        int id, tipo;
        char repet;
        do{
            printf("====================================\n");
            printf("  Qual produto deseja a atualizar:\n");
            printf("====================================\n");
            printf("1. Sorvetes\n");
            printf("2. Condimentos\n");
            printf("====================================\n");
            scanf("%d", &tipo);
            getchar();

        switch (tipo){
            system("cls");
            case 1:
                system("cls");
                printf("Digite o ID do sorvete a atualizar: ");
                scanf("%d", &id);
                getchar();

                if (id < 0 || id >= quantidade_sorvete) {
                    printf("ID invalido!\n");

                    system("pause");
                    system("cls");
                    return;
                }
                printf("\n");
                printf("====================================\n");
                printf("    Atualizando sorvete ID %d:\n", id);
                printf("====================================\n");
                printf("Novo Sabor (anterior: %s): ", sorvetes[id].sabor);
                fgets(sorvetes[id].sabor, sizeof(sorvetes[id].sabor), stdin);

                printf("Nova Data de Validade (anterior: %d): ", sorvetes[id].validade);
                scanf("%d", &sorvetes[id].validade);
                getchar();
                printf("Novo Preco (anterior: %.2f): ", sorvetes[id].preco);
                scanf("%f", &sorvetes[id].preco);
                getchar();
                printf("====================================\n");
                printf("Sorvete ID %d atualizado com sucesso!\n", id);
                printf("====================================\n");

                system("pause");
                system("cls");
                break;

            case 2:
                system("cls");
                printf("Digite o ID do condimento a atualizar: ");
                scanf("%d", &id);
                getchar();
                if(id < 0 || id >= quantidade_condimento){
                    printf("ID invalido!\n");

                    system("pause");
                    system("cls");
                    return;
                }
                printf("\n");
                printf("====================================\n");
                printf("  Atualizando condimento ID %d:\n", id);
                printf("====================================\n");
                printf("Novo Sabor (anterior: %s): ", condimento[id].sabor);
                fgets(condimento[id].sabor, sizeof(condimento[id].sabor), stdin);
                condimento[id].sabor[strcspn(condimento[id].sabor, "\n")] = 0;
                printf("Nova Data de Validade (anterior: %d): ", condimento[id].validade);
                scanf("%d", &condimento[id].validade);
                getchar();
                printf("Novo Preco (anterior: %.2f): ", condimento[id].preco);
                scanf("%f", &condimento[id].preco);
                getchar();
                printf("====================================\n");
                printf("Condimento ID %d atualizado com sucesso!\n", id);
                printf("====================================\n");

                system("pause");
                system("cls");
                break;
            default:
                printf("Opcao Invalida.\n");

                system("pause");
                system("cls");
                break;
            }
            printf("Deseja atualizar outro produto? (S/N) ");
            scanf(" %c", &repet);
            getchar();
        }while (repet == 'S' || repet == 's');

        system("cls");
    }
