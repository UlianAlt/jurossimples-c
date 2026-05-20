#include <stdio.h>
#include <stdlib.h>
#include "function_jurossimples.c"

int main(int argc, char const *argv[])
{
	if(argc != 4){
        printf("digite o nome do programa seguido de 3 argumentos (ex: jurossimples 500 5 12)");
        printf("\nsendo 500 o capital, 5 a taxa, e 12 o tempo, esses valores podem ser quaisquer inteiros");
    }else{
    	double capital = atof(argv[1]);
    	double taxa = atof(argv[2]);
    	double tempo = atof(argv[3]);
		printf("resultado: %f\n", jurossimples(capital, taxa, tempo));
		printf("\nFeito por PedroUlian (https://github.com/PedroUlian) (https://github.com/UlianAlt)");
    }

    return 0;
}