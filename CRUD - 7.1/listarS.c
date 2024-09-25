#include<stdio.h>
#include "sorvete.h"

void listarS(){

    if(quantidade_sorvete == 0){
        printf("====================================\n");
        printf("   Nao ha sorvetes cadastrados\n"  );
        printf("====================================\n");

        system("pause");
        system("cls");
    }else{
        printf("\n====================================\n");
        printf("         Lista de Sorvetes        \n");
        printf("====================================\n");
        for(int i = 0; i < quantidade_sorvete; i++){
            printf("ID: %d\n", sorvetes[i].id);
            printf("Sabor: %s\n", sorvetes[i].sabor);
            printf("Data de Validade: %d DIAS\n", sorvetes[i].validade);
            printf("Preco: %.2f\n", sorvetes[i].preco);
            printf("Quantidade: %d UN\n", sorvetes[i].quantidade);
            printf("====================================\n");
        }
        system("pause");
        system("cls");
    }

    if(quantidade_condimento == 0){
        printf("====================================\n");
        printf("  Nao ha condimentos cadastrados  \n");
        printf("====================================\n");

        system("pause");
        system("cls");
    }else{
        printf("\n====================================\n");
        printf("       Lista de Condimentos      \n");
        printf("====================================\n");
        for(int i = 0; i < quantidade_condimento; i++){
            printf("ID: %d\n", condimento[i].id);
            printf("Sabor: %s\n", condimento[i].sabor);
            printf("Data de Validade: %d DIAS\n", condimento[i].validade);
            printf("Preco: %.2f\n", condimento[i].preco);
            printf("Quantidade: %d UN\n", condimento[i].quantidade);
            printf("====================================\n");
        }
        system("pause");
        system("cls");
    }

    if(quantidade_sorvete == 0 && quantidade_condimento == 0) {
        printf("====================================\n");
        printf("   Nao ha produtos cadastrados\n");
        printf("====================================\n");
    system("pause");
    system("cls");
    }
}
