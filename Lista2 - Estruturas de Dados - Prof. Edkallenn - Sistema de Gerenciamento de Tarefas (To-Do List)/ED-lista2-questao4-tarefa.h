/*
** Função : Definição do TAD Tarefa
** Autor : Hygor Alves
** Data : 04/06/2024
** Observações:Este arquivo contém a definição da estrutura de dados Tarefa, que representa uma tarefa a ser realizada.
*/

#ifndef TAREFA_H
#define TAREFA_H

typedef struct {
    char descricao[100];
    int prioridade; // 1 (baixa), 2 (média), 3 (alta)
    int dataVencimento; // formato DDMMYYYY
} Tarefa;

#endif
