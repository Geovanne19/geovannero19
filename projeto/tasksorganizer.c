#include <stdio.h>
#include <stdlib.h>
//#include <locale.h>
#include <string.h>
//#include "tempo.h"
#include "lista.h"
#include "funcoestask.h"
#define SAIR 5

int main(){
    //etlocale(LC_ALL, "Portuguese");

    Lista lista;
    Tarefa tarefa;
    int op, Resposta=-1;
    InicializaLista(&lista);
    do{

        printf("TASKS ORGANIZER\n\n");

        if(Vazia(&lista)){
            printf("\nInsira uma Tarefa!\n\n");
        } else Printar(&lista);

        printf("1 - Adicionar Tarefa\n2 - Marcar tarefa como 'Feita'\n3 - Buscar\n4 - Pomodoro\n5 - Cronômetro\n6 - Metas\n7 - Remover Tarefa\n0 - Sair\n");
        scanf("%d", &op);

        switch (op) {
            
            case 1:
                InserirTarefa(); 
                break;
            default:
                printf("Opção Inválida");   
        }
 
    } while(op!=7);

    return 0;
}