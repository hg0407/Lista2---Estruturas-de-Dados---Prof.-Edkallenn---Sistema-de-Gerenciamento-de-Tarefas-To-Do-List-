/*
** Função : Implementação das operações da Lista Encadeada
** Autor : Hygor Alves
** Data : 04/06/2024
** Observações: - Este arquivo contém as implementações das operações definidas no arquivo lista.h.
*/

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void inicializarLista(Lista* lista) {
    lista->inicio = NULL;
}

void adicionarInicioLista(Lista* lista, Tarefa tarefa) {
    No* novoNo = (No*)malloc(sizeof(No));
    if (!novoNo) return;
    novoNo->tarefa = tarefa;
    novoNo->proximo = lista->inicio;
    lista->inicio = novoNo;
}

void adicionarFimLista(Lista* lista, Tarefa tarefa) {
    No* novoNo = (No*)malloc(sizeof(No));
    if (!novoNo) return;
    novoNo->tarefa = tarefa;
    novoNo->proximo = NULL;
    if (lista->inicio == NULL) {
        lista->inicio = novoNo;
    } else {
        No* atual = lista->inicio;
        while (atual->proximo != NULL) {
            atual = atual->proximo;
        }
        atual->proximo = novoNo;
    }
}

void removerInicioLista(Lista* lista) {
    if (lista->inicio == NULL) return;
    No* temp = lista->inicio;
    lista->inicio = lista->inicio->proximo;
    free(temp);
}

void removerFimLista(Lista* lista) {
    if (lista->inicio == NULL) return;
    if (lista->inicio->proximo == NULL) {
        free(lista->inicio);
        lista->inicio = NULL;
        return;
    }
    No* atual = lista->inicio;
    while (atual->proximo->proximo != NULL) {
        atual = atual->proximo;
    }
    free(atual->proximo);
    atual->proximo = NULL;
}

void imprimirLista(Lista* lista) {
    No* atual = lista->inicio;
    while (atual != NULL) {
        printf("Descrição: %s\n", atual->tarefa.descricao);
        printf("Prioridade: %d\n", atual->tarefa.prioridade);
        printf("Data de vencimento: %d\n", atual->tarefa.dataVencimento);
        printf("\n");
        atual = atual->proximo;
    }
}
