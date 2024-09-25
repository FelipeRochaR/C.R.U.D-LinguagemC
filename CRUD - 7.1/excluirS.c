#include <stdio.h>
#include "sorvete.h"

void excluirS(){
    int id, tipo;
    printf("====================================\n");
    printf("Escolha o tipo de produto a excluir:\n");
    printf("====================================\n");
    printf("1. Sorvete\n");
    printf("2. Condimento\n");
    printf("====================================\n");
    scanf("%d", &tipo);
    getchar();

    switch (tipo){
        case 1:
            system("cls");
            printf("Digite o ID do sorvete a excluir: ");
            scanf("%d", &id);
            getchar();

            if(id < 0 || id >= quantidade_sorvete){
                printf("ID invalido!\n");

                system("pause");
                system("cls");
                return;
            }
            for (int i = 0; i < quantidade_sorvete; i++){
                if (sorvetes[i].id == id){
                    for (int j = i; j < quantidade_sorvete - 1; j++){
                        sorvetes[j] = sorvetes[j + 1];
                    }
                    quantidade_sorvete--;

                    printf("\n");
                    printf("====================================\n");
                    printf("   Sorvete deletado com sucesso!\n");
                    printf("====================================\n");
                    getchar();

                    system("pause");
                    system("cls");
                    return;
                }
            }
            break;
        case 2:
            system("cls");
            printf("Digite o ID do condimento a excluir: ");
            scanf("%d", &id);
            getchar();

            if(id < 0 || id >= quantidade_condimento){
                printf("ID invalido!\n");
                system("pause");
                system("cls");
                return;
            }
            for (int i = id; i < quantidade_condimento - 1; i++){
                condimento[i] = condimento[i + 1];
                condimento[i].id = i;
            }

            quantidade_condimento--;
            printf("====================================\n");
            printf("  Condimento excluido com sucesso!\n", id);
            printf("====================================\n");

            break;
        default:
            printf("Opcao invalida.\n");
        }
    }

