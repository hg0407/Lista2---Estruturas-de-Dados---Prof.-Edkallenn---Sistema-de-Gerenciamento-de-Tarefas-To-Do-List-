/*
** Função : Definição do TAD Lista Encadeada
** Autor : Hygor Alves
** Data : 04/06/2024
** Observações: Este arquivo contém a definição da estrutura de dados Lista Encadeada, que é utilizada para armazenar as tarefas a serem realizadas na To-Do List.
**    - As operações básicas sobre essa lista (adicionar no início, adicionar no final, remover do início, remover do final e imprimir) são definidas aqui.
*/

#ifndef LISTA_H
#define LISTA_H

#include "tarefa.h"

typedef struct No {
    Tarefa tarefa;
    struct No* proximo;
} No;

typedef struct {
    No* inicio;
} Lista;

void inicializarLista(Lista* lista);
void adicionarInicioLista(Lista* lista, Tarefa tarefa);
void adicionarFimLista(Lista* lista, Tarefa tarefa);
void removerInicioLista(Lista* lista);
void removerFimLista(Lista* lista);
void imprimirLista(Lista* lista);

#endif
