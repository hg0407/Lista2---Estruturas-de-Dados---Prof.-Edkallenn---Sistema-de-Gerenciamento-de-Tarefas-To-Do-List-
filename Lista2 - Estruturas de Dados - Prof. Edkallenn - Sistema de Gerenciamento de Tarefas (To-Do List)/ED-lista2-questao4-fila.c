/*
** Função : Implementação das operações da Fila
** Autor : Hygor Alves
** Data : 04/06/2024
** Observações:  - Este arquivo contém as implementações das operações definidas no arquivo fila.h.
*/

#include "fila.h"
#include <stdlib.h>

void inicializarFila(Fila* fila) {
    fila->frente = NULL;
    fila->tras = NULL;
}

void enfileirar(Fila* fila, Tarefa tarefa) {
    NoFila* novoNo = (NoFila*)malloc(sizeof(NoFila));
    if (!novoNo) return;
    novoNo->tarefa = tarefa;
    novoNo->proximo = NULL;
    if (fila->frente == NULL) {
        fila->frente = novoNo;
    } else {
        fila->tras->proximo = novoNo;
    }
    fila->tras = novoNo;
}

Tarefa desenfileirar(Fila* fila) {
    if (fila->frente == NULL) {
        printf("Erro: Fila vazia!\n");
        Tarefa tarefa_vazia;
        return tarefa_vazia;
    }
    NoFila* temp = fila->frente;
    Tarefa tarefa = temp->tarefa;
    fila->frente = fila->frente->proximo;
    if (fila->frente == NULL) {
        fila->tras = NULL;
    }
    free(temp);
    return tarefa;
}

int filaVazia(Fila* fila) {
    return (fila->frente == NULL);
}
