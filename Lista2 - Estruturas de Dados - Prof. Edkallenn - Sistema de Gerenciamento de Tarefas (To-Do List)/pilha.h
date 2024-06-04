/*
** Função : Definição do TAD Pilha
** Autor : Hygor Alves
** Data : 04/06/2024
** Observações: - Este arquivo contém a definição da estrutura de dados Pilha, que é utilizada para armazenar as tarefas concluídas.
**    - As operações básicas sobre essa pilha (empilhar, desempilhar, verificar se está vazia ou cheia) são definidas aqui.
*/

#ifndef PILHA_H
#define PILHA_H

#include "tarefa.h"

#define MAX_TAREFAS 100

typedef struct {
    Tarefa itens[MAX_TAREFAS];
    int topo;
} Pilha;

void inicializarPilha(Pilha* pilha);
void empilhar(Pilha* pilha, Tarefa tarefa);
Tarefa desempilhar(Pilha* pilha);
int pilhaVazia(Pilha* pilha);
int pilhaCheia(Pilha* pilha);

#endif
