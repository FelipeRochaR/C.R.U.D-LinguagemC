#include<stdio.h>
#include "sorvete.h"
#include "adicionarS.c"
#include "listarS.c"
#include "atualizarS.c"
#include "excluirS.c"
#include "txtS.c"
#include "venderS.c"

int main(){
    int opcao;

    do{
        printf("\n====================================\n");
        printf("       Sistema de Sorveteria         \n");
        printf("====================================\n");
        printf("1. Adicionar produtos\n");
        printf("2. Listar produtos\n");
        printf("3. Atualizar sorvete\n");
        printf("4. Deletar sorvete\n");
        printf("5. Vender sorvete\n");
        printf("6. Gerar relatorio\n");
        printf("7. Sair\n");
        printf("====================================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
        case 1:
            system("cls");
            adicionarS();
            break;
        case 2:
            system("cls");
            listarS();
            break;
        case 3:
            system("cls");
            atualizarS();
            break;
        case 4:
            system("cls");
            excluirS();
            break;
        case 5:
            system("cls");
            venderS();
            break;
        case 6:
            Relatorio();
            system("pause");
            system("cls");
            break;
        case 7:
            printf("\n");
            printf("====================================\n");
            printf("               Saindo...         \n");
            printf("====================================\n");
            break;
        default:
            printf("Opcao Invalida -");
            system("pause");
            system("cls");
        }
    }while(opcao != 7);
}
