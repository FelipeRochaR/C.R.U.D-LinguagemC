#ifndef SORVETES_H
#define SORVETES_H

#define max_sorvete 5
#define max_condimento 5

typedef struct {
    int id;
    char sabor[50];
    float preco;
    int quantidade;
    int validade;

} Sorvete;

typedef struct {
    int id;
    char sabor[50];
    float preco;
    int quantidade;
    int validade;

} Condimento;

// SORVETES
Sorvete sorvetes[max_sorvete];
int quantidade_sorvete = 0;

int adicionarSorvete(Sorvete novo_sorvete){
    if(quantidade_sorvete == max_sorvete){
        return -1;
    }
    sorvetes[quantidade_sorvete] = novo_sorvete;
    sorvetes[quantidade_sorvete].id = quantidade_sorvete;
    quantidade_sorvete++;
    return 0;
}

// CONDIMENTO
Condimento condimento[max_condimento];
int quantidade_condimento = 0;

int adicionarCondimento(Condimento novo_condimento){
    if(quantidade_condimento == max_condimento){
        return -1;
    }
    condimento[quantidade_condimento] = novo_condimento;
    condimento[quantidade_condimento].id = quantidade_condimento;
    quantidade_condimento++;
    return 0;
}

//RELATORIO
extern int totalSorvetesAdicionados;
extern int totalCondimentosAdicionados;
extern int totalSorvetesVendidos;
extern int totalCondimentosVendidos;
extern float totalVendasSorvetes;
extern float totalVendasCondimentos;


void adicionarS();
void listarS();
void atualizarS();
void excluirS();
void Relatorio();

#endif
