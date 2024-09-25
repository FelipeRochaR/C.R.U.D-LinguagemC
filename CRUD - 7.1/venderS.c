#include "sorvete.h"
#include <stdio.h>

int totalSorvetesVendidos = 0;
int totalCondimentosVendidos = 0;
float totalVendasSorvetes = 0.0;
float totalVendasCondimentos = 0.0;


void venderS(){
    int escolhaSorvete, escolhaCondimento, qtdSorveteComprada, qtdCondimentoComprado;
    float total = 0;

    printf("====================================\n");
    printf("   Escolha um sabor de sorvete: \n", quantidade_sorvete);
    printf("====================================\n");
    for (int i = 0; i < quantidade_sorvete; i++){
        printf("%d. %s - R$%.2f\n", i + 1, sorvetes[i].sabor, sorvetes[i].preco);
    }
    printf("====================================\n");
    scanf("%d", &escolhaSorvete);
    getchar();

    printf("\n");
    printf("Quantidade (UN): ");
    scanf("%d", &qtdSorveteComprada);
    getchar();

    printf("\n");
    printf("====================================\n");
    printf("Escolha um condimento (0 para nenhum)? \n");
    printf("====================================\n");
    for (int i = 0; i < quantidade_condimento; i++){
        printf("%d. %s - R$%.2f\n", i + 1, condimento[i].sabor, condimento[i].preco);
    }
    printf("====================================\n");
    scanf("%d", &escolhaCondimento);
    getchar();


    if (escolhaCondimento > 0){
        printf("\n");
        printf("Quantidade (UN): ");
        scanf("%d", &qtdCondimentoComprado);
        getchar();
    }else{
        qtdCondimentoComprado = 0;
    }

        printf("\n");
        system("pause");
        system("cls");


    float precoSorvete = sorvetes[escolhaSorvete - 1].preco * qtdSorveteComprada;
    float precoCondimento = (escolhaCondimento > 0) ? condimento[escolhaCondimento - 1].preco * qtdCondimentoComprado : 0;

    printf("\n============= Recibo =============\n");
    printf("Sorvete: %s\n", sorvetes[escolhaSorvete - 1].sabor);
    printf("Quantidade: %d\ UN \n", qtdSorveteComprada);
    printf("Preco Unitario: R$ %.2f\n", sorvetes[escolhaSorvete - 1].preco);
    printf("Total: R$ %.2f\n", precoSorvete);

    if(qtdCondimentoComprado > 0){
    printf("\n");
    printf("Condimentos:\n");
    printf("Condimento: %s\n", condimento[escolhaCondimento - 1].sabor);
    printf("Quantidade: %d UN\n", qtdCondimentoComprado);
    printf("Preco Unitario: R$%.2f\n", condimento[escolhaCondimento - 1].preco);
    printf("Total: RS%.2f\n", precoCondimento);
    }
    total = precoSorvete + precoCondimento;
    printf("\n");
    printf("Valor Total: R$%.2f\n", total);
    printf("\n");
    printf("====================================\n");

    totalSorvetesVendidos += qtdSorveteComprada;
    totalVendasSorvetes += precoSorvete;
    if (qtdCondimentoComprado > 0){
        totalCondimentosVendidos += qtdCondimentoComprado;
        totalVendasCondimentos += precoCondimento;
    }

    system("pause");
    system("cls");
}
