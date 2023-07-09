#include <stdio.h>
#include "lista.h"
#include "tempo.h"


int main(){
    Tarefa teste;
    teste.Status = PENDENTE;
    Lista lista;
    InicializaLista(&lista);
    InserirTarefa();
    //Data data = DataAtual();
    // printf("%02d/%02d/%04d\n", data.Dia, data.Mes, data.Ano);
    // data.Dia = 29;
    // data.Mes = FEVEREIRO;
    // data.Ano = 2025;
    // printf("%02d/%02d/%4d %d\n", data.Dia, data.Mes, data.Ano, DataValida(data));

    


    return 0;
}

