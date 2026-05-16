#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define T 3 // -> Grau minimo/ O máximo seria: 2T -1 Chaves

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
}