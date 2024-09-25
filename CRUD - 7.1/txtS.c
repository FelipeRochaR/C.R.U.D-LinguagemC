#include<stdio.h>
#include "sorvete.h"

extern int totalSorvetesAdicionados;
extern int totalCondimentosAdicionados;
extern int totalSorvetesVendidos;
extern int totalCondimentosVendidos;
extern float totalVendasSorvetes;
extern float totalVendasCondimentos;

void Relatorio() {
    FILE *file = fopen("relatorio_diario.txt", "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    fprintf(file, "Relatório do Dia:\n\n");

    fprintf(file, "Itens Adicionados Hoje:\n");
    fprintf(file, "Sorvetes Adicionados: %d\n", totalSorvetesAdicionados);
    fprintf(file, "Condimentos Adicionados: %d\n\n", totalCondimentosAdicionados);

    fprintf(file, "Vendas de Hoje:\n");
    fprintf(file, "Sorvetes Vendidos: %d\n", totalSorvetesVendidos);
    fprintf(file, "Vendas de Sorvetes (R$): %.2f\n", totalVendasSorvetes);
    fprintf(file, "Condimentos Vendidos: %d\n", totalCondimentosVendidos);
    fprintf(file, "Vendas de Condimentos (R$): %.2f\n\n", totalVendasCondimentos);

    float totalVendas = totalVendasSorvetes + totalVendasCondimentos;
    fprintf(file, "Total de Vendas do Dia (R$): %.2f\n", totalVendas);

    fclose(file);
    printf("Relatório gerado com sucesso.\n");
}
