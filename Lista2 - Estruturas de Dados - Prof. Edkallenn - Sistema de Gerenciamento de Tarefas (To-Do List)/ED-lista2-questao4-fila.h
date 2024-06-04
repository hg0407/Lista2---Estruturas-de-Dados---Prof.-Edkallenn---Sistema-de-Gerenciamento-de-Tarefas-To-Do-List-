/*
** Função : Definição do TAD Fila
** Autor : Hygor Alves
** Data : 04/06/2024
** Observações:- Este arquivo contém a definição da estrutura de dados Fila, que é utilizada para agendar tarefas com data de vencimento.
**    - As operações básicas sobre essa fila (enfileirar, desenfileirar, verificar se está vazia) são definidas aqui.
*/

#ifndef FILA_H
#define FILA_H

#include "tarefa.h"

typedef struct NoFila {
    Tarefa tarefa;
    struct NoFila* proximo;
} NoFila;

typedef struct {
    NoFila* frente;
    NoFila* tras;
} Fila;

void inicializarFila(Fila* fila);
void enfileirar(Fila* fila, Tarefa tarefa);
Tarefa desenfileirar(Fila* fila);
int filaVazia(Fila* fila);

#endif
