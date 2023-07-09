#include <stdio.h>
#include "tempo.h"
#define TAMDESCRICAO 128
#define TAMTAREFA 64
#define TAMTAG 32
#define ALTA 1
#define MEDIA 2
#define BAIXA 3
#define NENHUMA 4
#define FEITA 1
#define PENDENTE 0
#define PRIORIDADE 3
#define DATA 2
#define TAG 1 


typedef struct Tarefa{
    char Nome[TAMTAREFA];
    char Descricao[TAMDESCRICAO];
    char Tag[TAMTAG];
    int Status;
    int Prioridade;
    Data data;
    struct Tarefa * Anterior, * Proximo;
}Tarefa;


typedef struct Lista{
    Tarefa * Primeira, * Ultima;
    int Tam;
}Lista;


void InicializaLista(Lista * lista);
int Vazia(Lista * lista);
int UmaTarefa(Lista * lista);
void InserirInicioLista(Tarefa tarefa, Lista * lista);
void RemoverFinal(Lista *lista);
void Remover(Lista *lista, Tarefa tarefa);
void Destroir(Lista * lista);
void Printar(Lista * lista);
