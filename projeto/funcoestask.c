#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "lista.h"
#include "funcoestask.h"

// void MenuPrincipal(){

    
// }

void InserirTarefa(){
    Tarefa tarefa;
    Lista lista;

    switch(MenuInserirTarefa()) {
        
        case 1:
            printf("\nDigite a título da tarefa:\n");
                scanf("%*c%s", tarefa.Nome);
                MenuInserirTarefa();
                break;
        case 2:
            // printf("Difite a data:");
            // scanf("%d", &tarefa.data);
            // MenuInserirTarefa();
            // break;
        case 3:
            printf("Digite a Prioridade:\n\n1 - Alta\n2 - Média\n3 - Baixa\n4 - Nenhuma\n");
            scanf("%d", &tarefa.Prioridade);
            MenuInserirTarefa();
            break;
        case 4:
            printf("Digite uma tag para esta tarefa:\n");
            scanf("%31[^\n]s", tarefa.Tag);
            MenuInserirTarefa();
            break;
        case 0:
            InserirInicioLista(tarefa, &lista);
            return;
            break;

        default:
            printf("Opção Inválida\n\n");
            MenuInserirTarefa();
            break;
    }

}

int MenuInserirTarefa(){
    int op;
    printf("O que você quer fazer?\n1 - +Título\n2 - +Data\n3 - +Prioridade\n4 - +Tag\n0 - Voltar\n");
    scanf("%d", &op);
    return op;
}
