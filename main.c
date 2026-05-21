#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define T 3 // -> Grau minimo/ O máximo seria: 2T -1 Chaves

//CONFERÊNCIA:
//a raiz é uma folha ou possui no mínimo dois filhos;
//cada nó interno (exceto a raiz) possui no mínimo d + 1 filhos;
//cada nó possui no máximo 2d+1 filhos;
//todas as folhas estão no mesmo nível.

typedef struct no {
    int chaves[2*T - 1]; //Array das chaves
    struct no *filho[2*T];
    int n; //quantidade de nó
    bool folha; // É verdadeiro esse nó for uma folha
}no;

//Criar nó
no *criar();

//Busca -> João
no *busca();

// divide um nó cheio ao meio e sobe a chave central para o pai
void slit();

//Inserir um nó que não está cheio
void insertNotFull();

//Inserção principal -> Bianca
void insert();

//Impressão
void ordem();

int main(){
    // colocar 1-Busca 2-Inserir 3-Finalizar
}