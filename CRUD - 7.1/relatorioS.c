#include "sorvete.h"

void Relatorio() {
    file *file = fopen("relatorio_diario.txt", "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }
    fprintf(file, "Relatorio do Dia:\n");
    fprintf(file, "Entradas de sorvetes: %d\n", entradas_do_dia);
    fprintf(file, "Sorvetes vendidos: %d\n", vendas_do_dia);
    fclose(file);
    printf("====================================\n");
    printf("    Relatorio gerado com sucesso.\n");
    printf("====================================\n");

    system("pause");
    system("cls");
}
