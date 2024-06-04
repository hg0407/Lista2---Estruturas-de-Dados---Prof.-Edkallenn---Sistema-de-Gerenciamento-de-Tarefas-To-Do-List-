/*
** Função : Implementação das operações da Pilha
** Autor : Hygor Alves
** Data : 04/06/2024
** Observações:  - Este arquivo contém as implementações das operações definidas no arquivo pilha.h.
*/

#include "pilha.h"

void inicializarPilha(Pilha* pilha) {
    pilha->topo = -1;
}

void empilhar(Pilha* pilha, Tarefa tarefa) {
    if (pilha->topo < MAX_TAREFAS - 1) {
        pilha->topo++;
        pilha->itens[pilha->topo] = tarefa;
    } else {
        printf("Erro: Pilha cheia!\n");
    }
}

Tarefa desempilhar(Pilha* pilha) {
    if (pilha->topo >= 0) {
        Tarefa tarefa = pilha->itens[pilha->topo];
        pilha->topo--;
        return tarefa;
    } else {
        printf("Erro: Pilha vazia!\n");
        Tarefa tarefa_vazia;
        return tarefa_vazia;
    }
}

int pilhaVazia(Pilha* pilha) {
    return (pilha->topo == -1);
}

int pilhaCheia(Pilha* pilha) {
    return (pilha->topo == MAX_TAREFAS - 1);
}
