/*
** Função : Implementação das operações do Deque
** Autor : Hygor Alves
** Data : 04/06/2024
** Observações: - Este arquivo contém as implementações das operações definidas no arquivo deque.h.
*/

#include "deque.h"

void inicializarDeque(Deque* deque) {
    deque->inicio = 0;
    deque->fim = -1;
    deque->tamanho = 0;
}

void adicionarInicioDeque(Deque* deque, Tarefa tarefa) {
    if (!dequeCheio(deque)) {
        deque->inicio = (deque->inicio - 1 + MAX_TAREFAS) % MAX_TAREFAS;
        deque->itens[deque->inicio] = tarefa;
        deque->tamanho++;
    } else {
        printf("Erro: Deque cheio!\n");
    }
}

void adicionarFimDeque(Deque* deque, Tarefa tarefa) {
    if (!dequeCheio(deque)) {
        deque->fim = (deque->fim + 1) % MAX_TAREFAS;
        deque->itens[deque->fim] = tarefa;
        deque->tamanho++;
    } else {
        printf("Erro: Deque cheio!\n");
    }
}

Tarefa removerInicioDeque(Deque* deque) {
    if (!dequeVazio(deque)) {
        Tarefa tarefa = deque->itens[deque->inicio];
        deque->inicio = (deque->inicio + 1) % MAX_TAREFAS;
        deque->tamanho--;
        return tarefa;
    } else {
        printf("Erro: Deque vazio!\n");
        Tarefa tarefa_vazia;
        return tarefa_vazia;
    }
}

Tarefa removerFimDeque(Deque* deque) {
    if (!dequeVazio(deque)) {
        Tarefa tarefa = deque->itens[deque->fim];
        deque->fim = (deque->fim - 1 + MAX_TAREFAS) % MAX_TAREFAS;
        deque->tamanho--;
        return tarefa;
    } else {
        printf("Erro: Deque vazio!\n");
        Tarefa tarefa_vazia;
        return tarefa_vazia;
    }
}

int dequeVazio(Deque* deque) {
    return (deque->tamanho == 0);
}

int dequeCheio(Deque* deque) {
    return (deque->tamanho == MAX_TAREFAS);
}
