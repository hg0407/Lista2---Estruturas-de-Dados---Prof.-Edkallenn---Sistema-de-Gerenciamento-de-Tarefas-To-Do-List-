/*
** Função : Definição do TAD Deque
** Autor : Hygor Alves
** Data : 04/06/2024
** Observações: - Este arquivo contém a definição da estrutura de dados Deque, que é utilizada para permitir a remoção eficiente tanto do início quanto do final da lista de tarefas.
**  - As operações básicas sobre esse deque (adicionar no início, adicionar no final, remover do início, remover do final, verificar se está vazio ou cheio) são definidas aqui.
*/

#ifndef DEQUE_H
#define DEQUE_H

#include "tarefa.h"

#define MAX_TAREFAS 100

typedef struct {
    Tarefa itens[MAX_TAREFAS];
    int inicio;
    int fim;
    int tamanho;
} Deque;

void inicializarDeque(Deque* deque);
void adicionarInicioDeque(Deque* deque, Tarefa tarefa);
void adicionarFimDeque(Deque* deque, Tarefa tarefa);
Tarefa removerInicioDeque(Deque* deque);
Tarefa removerFimDeque(Deque* deque);
int dequeVazio(Deque* deque);
int dequeCheio(Deque* deque);

#endif
