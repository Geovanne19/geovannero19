#include <stdio.h>
#define JANEIRO 1
#define FEVEREIRO 2
#define MARCO 3
#define ABRIL 4 
#define MAIO 5
#define JUNHO 6
#define JULHO 7
#define AGOSTO 8
#define SETEMBRO 9
#define OUTUBRO 10
#define NOVEMBRO 11
#define DEZEMBRO 12


typedef struct {
    int Dia;
    int Mes;
    int Ano;
}Data;

int Bissexto(Data data);
Data DataAtual();
int DataValida(Data data);
void LeData(Data * data);