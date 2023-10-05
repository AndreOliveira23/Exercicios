/*
Problema #3 - Mapeamento cor-código > https://exercism.org/tracks/c/exercises/resistor-color
*/
#include <stdio.h>
#include <string.h>

struct cor{
    int codigo;
    char cor[30];
};

struct cores{
    struct cor cor;
};

int main(){

    //Inicializando array de cores
    char cores[10][10] = {"Black","Brown","Red","Orange","Yellow","Green","Blue","Violet","Grey","White"};
    int i;
    struct cores listaDeCores[10];

    //Copiando cada cor e cada código pra uma posição da estrutura que armazena cada cor e cada código
    for(i=0;i<10;i++){
        listaDeCores[i].cor.codigo = i;
        strcpy(listaDeCores[i].cor.cor,cores[i]);
    }

    char c;
    int code;
    int t = 1;
    while (t=1){
     printf("Insira um codigo entre 0 e 9, ou digite 'a' para sair: ");
     scanf("%d",&code);
     c = getchar();
     if(c == 'a') return 0;
     printf("codigo: %d \ncor: %s\n",listaDeCores[code].cor.codigo, listaDeCores[code].cor.cor);
    }
    return 0;
}