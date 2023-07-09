#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


void InicializaLista(Lista *lista){
    lista->Primeira = NULL;
    lista->Tam = 0;
    lista->Ultima = NULL;
}

int Vazia(Lista *lista){
    return (lista->Primeira == NULL && lista->Ultima == NULL && lista->Tam == 0);
}

int UmaTarefa(Lista * lista){
    return (lista->Primeira == lista->Ultima);
}


void InserirInicioLista(Tarefa tarefa, Lista *lista){

    Tarefa *NovoNo=NULL;
    NovoNo = (Tarefa*) malloc(sizeof(Tarefa));
    if (NovoNo == NULL) printf("Nao foi possivel alocar a memoria.\n");
    else {
        // funcao para passar tarefa para novono incompleta
        NovoNo->Status;
        //
        NovoNo->Anterior=NULL;
        lista->Tam++;
        if (Vazia(lista)){
            NovoNo->Proximo =NULL;
            lista->Primeira=NovoNo;
            lista->Ultima=NovoNo;
        }
        else {
            NovoNo->Proximo = lista->Primeira;    
            lista->Primeira = NovoNo;
            lista->Primeira->Anterior = NovoNo;
        }
    }
}   

void RemoverFinal(Lista *lista){
    Tarefa * copia;
    if (Vazia(lista)) printf("Lista vazia\n");
    else {
        if (UmaTarefa(lista)){
            free(lista->Ultima);
            InicializaLista(lista);
        }
        else {
            copia = lista->Ultima;
            lista->Ultima = lista->Ultima->Anterior;
            lista->Ultima->Proximo = NULL;
            free(copia);
        }
    }    
}

void Remover(Lista *lista, Tarefa tarefa){
    
}

void Destroir(Lista * lista){
    Tarefa * copia;
    for (copia = lista->Primeira; copia != NULL; copia = lista->Primeira) RemoverFinal(lista);
}

void Printar(Lista * lista){
    Tarefa * copia;
    if(Vazia(lista)) printf("Lista vazia\n");
    else for (copia = lista->Ultima->Anterior; copia != NULL; copia = copia->Anterior) printf("%s\n", copia->Status);
} // incompleta