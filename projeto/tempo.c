#include <stdio.h>
#include <time.h>
#include "tempo.h"


int Bissexto(Data data){
    return ((data.Ano%4 == 0 && data.Ano%100 != 0) || data.Ano%400 == 0);
} // OK

Data DataAtual(){
    Data data;
    timer_t TempoAtual = time(&TempoAtual);
    struct tm * tempoLocal = localtime(&TempoAtual);
    data.Dia = tempoLocal->tm_mday;
    data.Mes = tempoLocal->tm_mon + 1;
    data.Ano = tempoLocal->tm_year + 1900;
    return data;
} // OK

int DataValida(Data data){
    Data Atual = DataAtual();
    if(data.Mes < 1 
    || data.Mes > 12
    || data.Dia < 1
    || data.Dia > 31
    || data.Ano < Atual.Ano
    || ((data.Ano == Atual.Ano) && (data.Mes < Atual.Mes))
    || ((data.Ano == Atual.Ano) && (data.Mes == Atual.Mes) && (data.Dia < Atual.Dia))
    || (((data.Mes == ABRIL) || (data.Mes == JUNHO) 
        || (data.Mes == SETEMBRO) || (data.Mes == NOVEMBRO)) && (data.Dia > 30))
    || ((data.Mes == FEVEREIRO) && (data.Dia > 29))
    ) return 0;    
    else{
        if (Bissexto(data)) return 1;
        else{
            if((data.Mes == FEVEREIRO) && (data.Dia > 28)) return 0;
            else return 1;
        }            
    }
} //OK

void LeData(Data * data){
    printf("Dia: ")
    scanf("%d", data->Dia);
    printf("Mes: ")
    scanf("%d", data->Mes);
    printf("Ano: ")
    scanf("%d", data->Ano);
} // testar